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
        openButton->setGeometry(QRect(70, 30, 93, 28));
        labelPath = new QLabel(centralWidget);
        labelPath->setObjectName(QStringLiteral("labelPath"));
        labelPath->setGeometry(QRect(190, 30, 421, 31));
        imageList = new QListWidget(centralWidget);
        imageList->setObjectName(QStringLiteral("imageList"));
        imageList->setGeometry(QRect(120, 80, 256, 192));
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

        QMetaObject::connectSlotsByName(goodClass);
    } // setupUi

    void retranslateUi(QMainWindow *goodClass)
    {
        goodClass->setWindowTitle(QApplication::translate("goodClass", "good", nullptr));
        openButton->setText(QApplication::translate("goodClass", "Open", nullptr));
        labelPath->setText(QApplication::translate("goodClass", "\355\217\264\353\215\224\353\245\274 \354\236\205\353\240\245\355\225\230\354\204\270\354\232\224.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class goodClass: public Ui_goodClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOOD_H
