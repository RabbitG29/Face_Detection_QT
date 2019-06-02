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
    QLabel *labelImage;
    QPushButton *prevButton;
    QPushButton *nextButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *goodClass)
    {
        if (goodClass->objectName().isEmpty())
            goodClass->setObjectName(QStringLiteral("goodClass"));
        goodClass->resize(923, 651);
        centralWidget = new QWidget(goodClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        openButton = new QPushButton(centralWidget);
        openButton->setObjectName(QStringLiteral("openButton"));
        openButton->setGeometry(QRect(60, 30, 261, 61));
        labelPath = new QLabel(centralWidget);
        labelPath->setObjectName(QStringLiteral("labelPath"));
        labelPath->setGeometry(QRect(60, 110, 261, 31));
        imageList = new QListWidget(centralWidget);
        imageList->setObjectName(QStringLiteral("imageList"));
        imageList->setGeometry(QRect(60, 170, 256, 341));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(630, 100, 161, 61));
        processButton = new QPushButton(centralWidget);
        processButton->setObjectName(QStringLiteral("processButton"));
        processButton->setGeometry(QRect(522, 27, 281, 61));
        labelImage = new QLabel(centralWidget);
        labelImage->setObjectName(QStringLiteral("labelImage"));
        labelImage->setGeometry(QRect(530, 170, 261, 311));
        labelImage->setMaximumSize(QSize(261, 311));
        prevButton = new QPushButton(centralWidget);
        prevButton->setObjectName(QStringLiteral("prevButton"));
        prevButton->setGeometry(QRect(550, 500, 93, 28));
        nextButton = new QPushButton(centralWidget);
        nextButton->setObjectName(QStringLiteral("nextButton"));
        nextButton->setGeometry(QRect(680, 500, 93, 28));
        goodClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(goodClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 923, 26));
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

        QMetaObject::connectSlotsByName(goodClass);
    } // setupUi

    void retranslateUi(QMainWindow *goodClass)
    {
        goodClass->setWindowTitle(QApplication::translate("goodClass", "good", nullptr));
        openButton->setText(QApplication::translate("goodClass", "Open", nullptr));
        labelPath->setText(QApplication::translate("goodClass", "\355\217\264\353\215\224\353\245\274 \354\236\205\353\240\245\355\225\230\354\204\270\354\232\224.", nullptr));
        label->setText(QApplication::translate("goodClass", "\354\213\244\355\226\211 \352\262\260\352\263\274", nullptr));
        processButton->setText(QApplication::translate("goodClass", "\354\213\244\355\226\211", nullptr));
        labelImage->setText(QString());
        prevButton->setText(QApplication::translate("goodClass", "\354\235\264\354\240\204", nullptr));
        nextButton->setText(QApplication::translate("goodClass", "\353\213\244\354\235\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class goodClass: public Ui_goodClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOOD_H
