#include "good.h"
#include "Result.h"
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
QString save_lot;
int index = 0;
double ticks = getTickFrequency();
int64 t0;

//TODO : ½ÇÇà ¹öÆ° ´­·¶À» ¶§ °á°ú¸¸ ¶ç¿öÁÖ¸é µÊ

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
void good::selectedImage() {
	index = ui.imageList->currentRow();
	displayImage();
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

	string img_dir = save_lot.toStdString() + '/';

	for (auto file : fileinfolist) {
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

		cvtColor(img, img, COLOR_BGR2RGB);
		QPixmap p = QPixmap::fromImage(QImage((unsigned char*)img.data, img.cols, img.rows, QImage::Format_RGB888).scaled(ui.image_result->width(), ui.image_result->height()));
		ui.image_result->setPixmap(p);
		//ui.image_result->resize(img.cols, img.rows);
		ui.image_result->resize(p.width(), p.height());
		break;
	}
}