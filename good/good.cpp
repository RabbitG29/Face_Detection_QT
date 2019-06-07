#include <Windows.h>
#include "good.h"
#include <fileapi.h>
#include <iostream>
#include <string>
#include <vector>

#include <QPushButton>
#include <qmessagebox.h>
#include <qfiledialog.h>
#include <qlabel.h>
#include <qpixmap.h>

#include <opencv2/imgproc.hpp>
#include <opencv2/objdetect.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/core.hpp>
#include <opencv2/videoio.hpp>

using namespace std;
using namespace cv;

QFileInfoList fileinfolist;
QFileInfoList fileinfolist2;
QString save_lot;
QString result_lot;
int index = 0;
int index2 = 0;
double ticks = getTickFrequency();
int64 t0;

//TODO : 파일 출력하기(../result 폴더 새로 생성)
//TODO2 : 출력한 파일 리스트에 담아서 보여주기

good::good(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void good::openButton() {
	QFileDialog dialog(this);
	QDir dir;
	dialog.setFileMode(QFileDialog::Directory);
	save_lot = QFileDialog::getExistingDirectory();
	ui.labelPath->setText(save_lot);
	dir.setPath(save_lot);
	QStringList filters;
	filters << "*.png" << "*.jpg" << "*.bmp";
	fileinfolist.clear();
	fileinfolist = dir.entryInfoList(filters, QDir::Files | QDir::NoDotAndDotDot);
	ui.label_fileSize->setText(QString::number(fileinfolist.length()));
	ui.imageList->clear();
	for (auto file : fileinfolist)
		ui.imageList->addItem(file.fileName());
	displayImage();
}

void good::displayImage() {
	QString img_path = save_lot + "/" + fileinfolist[index].fileName();
	QImage img(img_path);
	QPixmap buf = QPixmap::fromImage(img.scaled(ui.labelImage->width(), ui.labelImage->height()));
	//buf.scaled(img.width()/4, img.height()/4);
	ui.labelImage->setPixmap(buf);
	ui.labelImage->resize(buf.width(), buf.height());
}
void good::displayImage2() {
	QString img_path = result_lot + "/" + fileinfolist2[index2].fileName();
	QImage img(img_path);
	QPixmap buf = QPixmap::fromImage(img.scaled(ui.image_result->width(), ui.image_result->height()));
	//buf.scaled(img.width()/4, img.height()/4);
	ui.image_result->setPixmap(buf);
	ui.image_result->resize(buf.width(), buf.height());
}

void good::prevImage() {
	if (index > 0)
		index--;
	displayImage();
}
void good::nextImage() {
	if (index < fileinfolist.length() - 1)
		index++;
	displayImage();
}
void good::prevImage2() {
	if (index2 > 0)
		index2--;
	displayImage2();
}
void good::nextImage2() {
	if (index2 < fileinfolist2.length() - 1)
		index2++;
	displayImage2();
}
void good::selectedImage() {
	index = ui.imageList->currentRow();
	displayImage();
}
void good::selectedImage2() {
	index2 = ui.resultList->currentRow();
	displayImage2();
}
void good::processButton() {
	bool check_face = ui.checkBox_face->isChecked();
	bool check_man = ui.checkBox_man->isChecked();
	bool check_car = ui.checkBox_car->isChecked();

	if (!(check_face | check_man | check_car)) {
		QMessageBox msg;
		msg.setText("check first!");
		msg.exec();
		return;
	}
	QDir source, resultD;
	source.setPath(save_lot);
	resultD = source;
	resultD.cdUp();
	string img_dir = save_lot.toStdString() + '/';
	string result_dir = resultD.absolutePath().toStdString() + "/result";
	wstring temp = wstring(result_dir.begin(), result_dir.end());
	CreateDirectory(temp.c_str(), NULL);

	result_lot = result_lot.fromStdString(result_dir);
	resultD.setPath(result_lot);
	ui.labelPathR->setText(result_lot);
	/*QMessageBox msg;
	msg.setText("실행합니다.");
	msg.exec();*/
	
	result_dir += '/';
	int count = 0;
	for (auto file : fileinfolist) {
		count++;
		
		string img_path = img_dir + file.fileName().toStdString();
		Mat img = imread(img_path);

		vector<Rect> faces;
		vector<Rect> mans;
		vector<Rect> cars;

		if (check_face) {
			CascadeClassifier face_cascade;
			face_cascade.load("cascade_face.xml");
			t0 = getTickCount();
			face_cascade.detectMultiScale(img, faces, 1.3, 1, 0 | CASCADE_SCALE_IMAGE);
			t0 = getTickCount() - t0;

			for (int i = 0; i < faces.size(); i++)
				rectangle(img, faces[i], Scalar(255, 0, 0), 2, 1);
		}
		if (check_man) {
			CascadeClassifier face_cascade;
			face_cascade.load("cascade_man.xml");
			t0 = getTickCount();
			face_cascade.detectMultiScale(img, mans, 1.3, 1, 0 | CASCADE_SCALE_IMAGE);
			t0 = getTickCount() - t0;

			for (int i = 0; i < faces.size(); i++)
				rectangle(img, mans[i], Scalar(0, 255, 0), 2, 1);
		}
		if (check_car) {
			CascadeClassifier face_cascade;
			face_cascade.load("cascade_car.xml");
			t0 = getTickCount();
			face_cascade.detectMultiScale(img, cars, 1.3, 1, 0 | CASCADE_SCALE_IMAGE);
			t0 = getTickCount() - t0;

			for (int i = 0; i < faces.size(); i++)
				rectangle(img, cars[i], Scalar(0, 0, 255), 2, 1);
		}
		imwrite(result_dir + file.fileName().toStdString(), img);
		cvtColor(img, img, COLOR_BGR2RGB);
		QPixmap p = QPixmap::fromImage(QImage((unsigned char*)img.data, img.cols, img.rows, QImage::Format_RGB888).scaled(ui.image_result->width(), ui.image_result->height()));
		ui.image_result->setPixmap(p);
		//ui.image_result->resize(img.cols, img.rows);
		ui.image_result->resize(p.width(), p.height());	
	}

	QStringList filters2;
	filters2 << "*.png" << "*.jpg" << "*.bmp";
	fileinfolist2.clear();
	fileinfolist2 = resultD.entryInfoList(filters2, QDir::Files | QDir::NoDotAndDotDot);
	ui.resultList->clear();
	for (auto file : fileinfolist2)
		ui.resultList->addItem(file.fileName());
	displayImage2();
}