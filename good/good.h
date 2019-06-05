#include <QtWidgets/QMainWindow>
#include "ui_good.h"
#include <iostream>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace std;
using namespace cv;

class good : public QMainWindow
{
	Q_OBJECT

public:
	good(QWidget *parent = Q_NULLPTR);
	

private:
	Ui::goodClass ui;
	private slots:
	void openButton();
	void displayImage();
	void prevImage();
	void nextImage();
	void selectedImage();
	void processButton();
};
