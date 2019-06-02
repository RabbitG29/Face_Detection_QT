#include "good.h"
#include <iostream>
#include <QPushButton>
#include <qmessagebox.h>
#include <qfiledialog.h>
#include <qlabel.h>
#include <qpixmap.h>

using namespace std;

QFileInfoList fileinfolist;
QString save_lot;
int index = 0;

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
	ui.imageList->clear();
	fileinfolist = dir.entryInfoList(filters, QDir::Files | QDir::NoDotAndDotDot);
	for (int i = 0; i < fileinfolist.length();i++)
		ui.imageList->addItem(fileinfolist[i].fileName());
	displayImage();
}

void good::displayImage() {
	QString img_path = save_lot + "/" +  fileinfolist[index].fileName();
	ui.labelPath->setText(img_path);
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