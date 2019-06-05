/********************************************************************************
** Form generated from reading UI file 'Result.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULT_H
#define UI_RESULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ResultClass
{
public:
    QLabel *label_2;
    QPushButton *prevButton;
    QPushButton *nextButton;
    QLabel *label;
    QListView *listView;

    void setupUi(QWidget *ResultClass)
    {
        if (ResultClass->objectName().isEmpty())
            ResultClass->setObjectName(QStringLiteral("ResultClass"));
        ResultClass->resize(726, 494);
        label_2 = new QLabel(ResultClass);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(390, 60, 211, 361));
        prevButton = new QPushButton(ResultClass);
        prevButton->setObjectName(QStringLiteral("prevButton"));
        prevButton->setGeometry(QRect(380, 440, 93, 28));
        nextButton = new QPushButton(ResultClass);
        nextButton->setObjectName(QStringLiteral("nextButton"));
        nextButton->setGeometry(QRect(510, 440, 93, 28));
        label = new QLabel(ResultClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 20, 64, 15));
        listView = new QListView(ResultClass);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(50, 60, 256, 411));

        retranslateUi(ResultClass);

        QMetaObject::connectSlotsByName(ResultClass);
    } // setupUi

    void retranslateUi(QWidget *ResultClass)
    {
        ResultClass->setWindowTitle(QApplication::translate("ResultClass", "Result", nullptr));
        label_2->setText(QString());
        prevButton->setText(QApplication::translate("ResultClass", "\354\235\264\354\240\204", nullptr));
        nextButton->setText(QApplication::translate("ResultClass", "\353\213\244\354\235\214", nullptr));
        label->setText(QApplication::translate("ResultClass", "\354\240\200\354\236\245\353\220\234 \352\262\275\353\241\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ResultClass: public Ui_ResultClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULT_H
