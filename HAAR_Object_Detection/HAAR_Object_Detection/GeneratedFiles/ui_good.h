/********************************************************************************
** Form generated from reading UI file 'good.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOOD_H
#define UI_GOOD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_goodClass
{
public:
    QWidget *centralWidget;
    QPushButton *openButton;
    QLabel *labelPath;
    QListWidget *imageList;
    QLabel *label;
    QPushButton *processButton;
    QLabel *image_result;
    QPushButton *prevButton;
    QPushButton *nextButton;
    QLabel *labelPath_2;
    QLabel *label_fileSize;
    QCheckBox *checkBox_car;
    QCheckBox *checkBox_man;
    QCheckBox *checkBox_face;
    QLabel *labelImage;
    QLabel *labelPathR2;
    QPushButton *nextButton2;
    QPushButton *prevButton2;
    QListWidget *resultList;
    QLabel *labelPathR;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *goodClass)
    {
        if (goodClass->objectName().isEmpty())
            goodClass->setObjectName(QStringLiteral("goodClass"));
        goodClass->resize(959, 651);
        centralWidget = new QWidget(goodClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        openButton = new QPushButton(centralWidget);
        openButton->setObjectName(QStringLiteral("openButton"));
        openButton->setGeometry(QRect(0, 0, 171, 61));
        labelPath = new QLabel(centralWidget);
        labelPath->setObjectName(QStringLiteral("labelPath"));
        labelPath->setGeometry(QRect(0, 60, 171, 31));
        imageList = new QListWidget(centralWidget);
        imageList->setObjectName(QStringLiteral("imageList"));
        imageList->setGeometry(QRect(0, 120, 171, 321));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(440, 70, 161, 61));
        processButton = new QPushButton(centralWidget);
        processButton->setObjectName(QStringLiteral("processButton"));
        processButton->setGeometry(QRect(770, 0, 141, 61));
        image_result = new QLabel(centralWidget);
        image_result->setObjectName(QStringLiteral("image_result"));
        image_result->setGeometry(QRect(280, 120, 361, 311));
        image_result->setMaximumSize(QSize(480, 360));
        prevButton = new QPushButton(centralWidget);
        prevButton->setObjectName(QStringLiteral("prevButton"));
        prevButton->setGeometry(QRect(0, 550, 81, 28));
        nextButton = new QPushButton(centralWidget);
        nextButton->setObjectName(QStringLiteral("nextButton"));
        nextButton->setGeometry(QRect(90, 550, 81, 28));
        labelPath_2 = new QLabel(centralWidget);
        labelPath_2->setObjectName(QStringLiteral("labelPath_2"));
        labelPath_2->setGeometry(QRect(0, 90, 81, 31));
        label_fileSize = new QLabel(centralWidget);
        label_fileSize->setObjectName(QStringLiteral("label_fileSize"));
        label_fileSize->setGeometry(QRect(80, 90, 91, 31));
        checkBox_car = new QCheckBox(centralWidget);
        checkBox_car->setObjectName(QStringLiteral("checkBox_car"));
        checkBox_car->setGeometry(QRect(680, 20, 61, 19));
        checkBox_man = new QCheckBox(centralWidget);
        checkBox_man->setObjectName(QStringLiteral("checkBox_man"));
        checkBox_man->setGeometry(QRect(610, 20, 51, 19));
        checkBox_face = new QCheckBox(centralWidget);
        checkBox_face->setObjectName(QStringLiteral("checkBox_face"));
        checkBox_face->setGeometry(QRect(540, 20, 51, 19));
        labelImage = new QLabel(centralWidget);
        labelImage->setObjectName(QStringLiteral("labelImage"));
        labelImage->setGeometry(QRect(0, 460, 170, 80));
        labelImage->setMaximumSize(QSize(170, 80));
        labelPathR2 = new QLabel(centralWidget);
        labelPathR2->setObjectName(QStringLiteral("labelPathR2"));
        labelPathR2->setGeometry(QRect(230, 460, 161, 16));
        nextButton2 = new QPushButton(centralWidget);
        nextButton2->setObjectName(QStringLiteral("nextButton2"));
        nextButton2->setGeometry(QRect(450, 510, 81, 28));
        prevButton2 = new QPushButton(centralWidget);
        prevButton2->setObjectName(QStringLiteral("prevButton2"));
        prevButton2->setGeometry(QRect(360, 510, 81, 28));
        resultList = new QListWidget(centralWidget);
        resultList->setObjectName(QStringLiteral("resultList"));
        resultList->setGeometry(QRect(750, 120, 171, 321));
        labelPathR = new QLabel(centralWidget);
        labelPathR->setObjectName(QStringLiteral("labelPathR"));
        labelPathR->setGeometry(QRect(380, 460, 341, 16));
        goodClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(goodClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 959, 26));
        goodClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(goodClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        goodClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(goodClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        goodClass->setStatusBar(statusBar);

        retranslateUi(goodClass);
        QObject::connect(openButton, SIGNAL(clicked()), goodClass, SLOT(openButton()));
        QObject::connect(prevButton, SIGNAL(clicked()), goodClass, SLOT(prevImage()));
        QObject::connect(nextButton, SIGNAL(clicked()), goodClass, SLOT(nextImage()));
        QObject::connect(imageList, SIGNAL(currentRowChanged(int)), goodClass, SLOT(selectedImage()));
        QObject::connect(processButton, SIGNAL(clicked()), goodClass, SLOT(processButton()));
        QObject::connect(prevButton2, SIGNAL(clicked()), goodClass, SLOT(prevImage2()));
        QObject::connect(nextButton2, SIGNAL(clicked()), goodClass, SLOT(nextImage2()));
        QObject::connect(resultList, SIGNAL(currentRowChanged(int)), goodClass, SLOT(selectedImage2()));

        QMetaObject::connectSlotsByName(goodClass);
    } // setupUi

    void retranslateUi(QMainWindow *goodClass)
    {
        goodClass->setWindowTitle(QApplication::translate("goodClass", "good", nullptr));
        openButton->setText(QApplication::translate("goodClass", "Open", nullptr));
        labelPath->setText(QApplication::translate("goodClass", "\355\217\264\353\215\224\353\245\274 \354\236\205\353\240\245\355\225\230\354\204\270\354\232\224.", nullptr));
        label->setText(QApplication::translate("goodClass", "\354\213\244\355\226\211 \352\262\260\352\263\274", nullptr));
        processButton->setText(QApplication::translate("goodClass", "\354\213\244\355\226\211", nullptr));
        image_result->setText(QString());
        prevButton->setText(QApplication::translate("goodClass", "\354\235\264\354\240\204", nullptr));
        nextButton->setText(QApplication::translate("goodClass", "\353\213\244\354\235\214", nullptr));
        labelPath_2->setText(QApplication::translate("goodClass", "\354\264\235 \355\214\214\354\235\274 \354\210\230 : ", nullptr));
        label_fileSize->setText(QString());
        checkBox_car->setText(QApplication::translate("goodClass", "\354\236\220\353\217\231\354\260\250", nullptr));
        checkBox_man->setText(QApplication::translate("goodClass", "\354\202\254\353\236\214", nullptr));
        checkBox_face->setText(QApplication::translate("goodClass", "\354\226\274\352\265\264", nullptr));
        labelImage->setText(QString());
        labelPathR2->setText(QApplication::translate("goodClass", "\352\262\260\352\263\274 \354\240\200\354\236\245 \353\224\224\353\240\211\355\206\240\353\246\254 : ", nullptr));
        nextButton2->setText(QApplication::translate("goodClass", "\353\213\244\354\235\214", nullptr));
        prevButton2->setText(QApplication::translate("goodClass", "\354\235\264\354\240\204", nullptr));
        labelPathR->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class goodClass: public Ui_goodClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOOD_H
