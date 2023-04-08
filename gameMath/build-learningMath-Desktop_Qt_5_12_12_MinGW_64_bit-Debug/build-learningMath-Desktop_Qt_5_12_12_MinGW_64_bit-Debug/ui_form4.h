/********************************************************************************
** Form generated from reading UI file 'form4.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM4_H
#define UI_FORM4_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_form4
{
public:
    QLineEdit *lineEdit_4;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *form4)
    {
        if (form4->objectName().isEmpty())
            form4->setObjectName(QString::fromUtf8("form4"));
        form4->resize(400, 300);
        form4->setMinimumSize(QSize(400, 300));
        form4->setMaximumSize(QSize(400, 300));
        form4->setStyleSheet(QString::fromUtf8("background-color:#bebeb;\n"
""));
        lineEdit_4 = new QLineEdit(form4);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(20, 170, 61, 31));
        lineEdit_4->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";\n"
"background-color:#bebeb;\n"
"color: rgb(200, 237, 240);"));
        lineEdit_4->setMaxLength(3);
        label_4 = new QLabel(form4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(190, 159, 21, 41));
        label_4->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 170, 255);\n"
"font: 75 26pt \"Bahnschrift\";"));
        label_5 = new QLabel(form4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(90, 159, 21, 41));
        label_5->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 170, 255);\n"
"font: 75 26pt \"Bahnschrift\";"));
        lineEdit_5 = new QLineEdit(form4);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setEnabled(false);
        lineEdit_5->setGeometry(QRect(120, 170, 61, 31));
        lineEdit_5->setCursor(QCursor(Qt::ForbiddenCursor));
        lineEdit_5->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";\n"
"background-color:rgb(223, 223, 223);;\n"
"color: rgb(200, 237, 240);"));
        lineEdit_5->setMaxLength(3);
        lineEdit_6 = new QLineEdit(form4);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setEnabled(false);
        lineEdit_6->setGeometry(QRect(220, 170, 61, 31));
        lineEdit_6->setCursor(QCursor(Qt::ForbiddenCursor));
        lineEdit_6->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";\n"
"background-color:rgb(223, 223, 223);;\n"
"color: rgb(200, 237, 240);"));
        lineEdit_6->setMaxLength(3);
        lineEdit = new QLineEdit(form4);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(20, 110, 71, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";\n"
"background-color:#bebeb;\n"
"color: rgb(200, 237, 240);"));
        lineEdit->setMaxLength(3);
        label = new QLabel(form4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 120, 21, 20));
        label->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 170, 255);\n"
"font: 75 26pt \"Bahnschrift\";"));
        label_3 = new QLabel(form4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(290, 180, 21, 20));
        label_3->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 170, 255);\n"
"font: 75 26pt \"Bahnschrift\";"));
        pushButton_2 = new QPushButton(form4);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setEnabled(false);
        pushButton_2->setGeometry(QRect(40, 20, 301, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(200, 237, 240);\n"
"background-color:rgb(31, 31, 31);\n"
"border:1px solid rgb(200, 237, 240);"));
        label_2 = new QLabel(form4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 99, 21, 41));
        label_2->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 170, 255);\n"
"font: 75 26pt \"Bahnschrift\";"));
        pushButton_3 = new QPushButton(form4);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 240, 91, 41));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(200, 237, 240);\n"
"background-color:rgb(31, 31, 31);\n"
"border: 1px solid rgb(200, 237, 240);"));
        pushButton = new QPushButton(form4);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(290, 240, 91, 41));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(200, 237, 240);\n"
"background-color:rgb(31, 31, 31);\n"
"border: 1px solid rgb(200, 237, 240);"));
        lineEdit_3 = new QLineEdit(form4);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setEnabled(false);
        lineEdit_3->setGeometry(QRect(250, 110, 71, 31));
        lineEdit_3->setCursor(QCursor(Qt::ForbiddenCursor));
        lineEdit_3->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";\n"
"background-color:rgb(223, 223, 223);;\n"
"color: rgb(200, 237, 240);"));
        lineEdit_3->setMaxLength(3);
        lineEdit_7 = new QLineEdit(form4);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setEnabled(false);
        lineEdit_7->setGeometry(QRect(320, 170, 71, 31));
        lineEdit_7->setCursor(QCursor(Qt::ForbiddenCursor));
        lineEdit_7->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";\n"
"background-color:rgb(223, 223, 223);;\n"
"color: rgb(200, 237, 240);"));
        lineEdit_7->setMaxLength(3);
        lineEdit_2 = new QLineEdit(form4);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(140, 110, 71, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";\n"
"background-color:#bebeb;\n"
"color: rgb(200, 237, 240);"));
        lineEdit_2->setMaxLength(3);

        retranslateUi(form4);
        QObject::connect(pushButton_3, SIGNAL(clicked()), form4, SLOT(close()));

        QMetaObject::connectSlotsByName(form4);
    } // setupUi

    void retranslateUi(QDialog *form4)
    {
        form4->setWindowTitle(QApplication::translate("form4", "Dialog", nullptr));
        label_4->setText(QApplication::translate("form4", "x", nullptr));
        label_5->setText(QApplication::translate("form4", "x", nullptr));
        label->setText(QApplication::translate("form4", "=", nullptr));
        label_3->setText(QApplication::translate("form4", "=", nullptr));
        pushButton_2->setText(QApplication::translate("form4", "GETTING STARTED MULTIPLICATION", nullptr));
        label_2->setText(QApplication::translate("form4", "x", nullptr));
        pushButton_3->setText(QApplication::translate("form4", "<-", nullptr));
        pushButton->setText(QApplication::translate("form4", "VERIFY", nullptr));
    } // retranslateUi

};

namespace Ui {
    class form4: public Ui_form4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM4_H
