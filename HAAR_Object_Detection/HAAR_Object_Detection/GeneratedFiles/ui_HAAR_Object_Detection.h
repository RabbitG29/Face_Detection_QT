/********************************************************************************
** Form generated from reading UI file 'HAAR_Object_Detection.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HAAR_OBJECT_DETECTION_H
#define UI_HAAR_OBJECT_DETECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HAAR_Object_DetectionClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *HAAR_Object_DetectionClass)
    {
        if (HAAR_Object_DetectionClass->objectName().isEmpty())
            HAAR_Object_DetectionClass->setObjectName(QStringLiteral("HAAR_Object_DetectionClass"));
        HAAR_Object_DetectionClass->resize(600, 400);
        menuBar = new QMenuBar(HAAR_Object_DetectionClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        HAAR_Object_DetectionClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(HAAR_Object_DetectionClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        HAAR_Object_DetectionClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(HAAR_Object_DetectionClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        HAAR_Object_DetectionClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(HAAR_Object_DetectionClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        HAAR_Object_DetectionClass->setStatusBar(statusBar);

        retranslateUi(HAAR_Object_DetectionClass);

        QMetaObject::connectSlotsByName(HAAR_Object_DetectionClass);
    } // setupUi

    void retranslateUi(QMainWindow *HAAR_Object_DetectionClass)
    {
        HAAR_Object_DetectionClass->setWindowTitle(QApplication::translate("HAAR_Object_DetectionClass", "HAAR_Object_Detection", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HAAR_Object_DetectionClass: public Ui_HAAR_Object_DetectionClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HAAR_OBJECT_DETECTION_H
