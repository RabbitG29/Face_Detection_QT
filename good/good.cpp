#include "good.h"
#include <iostream>
#include <QPushButton>
#include <qmessagebox.h>
#include <qfiledialog.h>
#include <qlabel.h>

using namespace std;

QFileInfoList fileinfolist;

good::good(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void good::openButton() {
	QFileDialog dialog(this);
	QDir dir;
	dialog.setFileMode(QFileDialog::Directory);
	QString save_lot = QFileDialog::getExistingDirectory();
	ui.labelPath->setText(save_lot);
	dir.setPath(save_lot);
	QStringList filters;
	filters << "*.png" << "*.jpg" << "*.bmp";
	fileinfolist.clear();
	ui.imageList->clear();
	fileinfolist = dir.entryInfoList(filters, QDir::Files | QDir::NoDotAndDotDot);
	for (int i = 0; i < fileinfolist.length();i++)
		ui.imageList->addItem(fileinfolist[i].fileName());
}
