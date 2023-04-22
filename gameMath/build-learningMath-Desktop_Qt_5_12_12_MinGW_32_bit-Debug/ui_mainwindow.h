/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *label_13;
    QPushButton *pushButton_3;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 400);
        MainWindow->setMinimumSize(QSize(400, 400));
        MainWindow->setMaximumSize(QSize(400, 400));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:rgb(8,8,8);"));
        pushButton_4 = new QPushButton(MainWindow);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(100, 110, 191, 51));
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8("color: rgb(200, 237, 240);\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"backgroudn-color:rgb(190, 190, 190);\n"
"border:1px solid rgb(200, 237, 240);"));
        pushButton_2 = new QPushButton(MainWindow);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 230, 191, 51));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(200, 237, 240);\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"backgroudn-color:rgb(190, 190, 190);\n"
"border:1px solid rgb(200, 237, 240);"));
        pushButton = new QPushButton(MainWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 290, 191, 51));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(200, 237, 240);\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"backgroudn-color:rgb(190, 190, 190);\n"
"border:1px solid rgb(200, 237, 240);"));
        label_13 = new QLabel(MainWindow);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(80, 30, 251, 41));
        label_13->setStyleSheet(QString::fromUtf8("font: 16pt \"Bahnschrift\";\n"
"background-color:rgb(8,8,8);\n"
"color: rgb(200, 237, 240);\n"
""));
        pushButton_3 = new QPushButton(MainWindow);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(100, 170, 191, 51));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(200, 237, 240);\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"backgroudn-color:rgb(190, 190, 190);\n"
"border:1px solid rgb(200, 237, 240);"));

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "SUM", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "MULTIPLICATION", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "DIVISION", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "Learning basic operations", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "SUBTRACTION", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
