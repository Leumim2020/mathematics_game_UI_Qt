/********************************************************************************
** Form generated from reading UI file 'formsum.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMSUM_H
#define UI_FORMSUM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_formsum
{
public:
    QLabel *label_5;
    QLineEdit *lineEditc1;
    QLineEdit *lineEditc3;
    QLabel *label_2;
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *lineEditc2;
    QLabel *label_4;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6_rs;
    QPushButton *pushButton_7_rs;
    QLineEdit *lineEditc4;
    QLineEdit *lineEditc5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_8_error;
    QPushButton *pushButton_9_success;

    void setupUi(QDialog *formsum)
    {
        if (formsum->objectName().isEmpty())
            formsum->setObjectName(QString::fromUtf8("formsum"));
        formsum->resize(400, 300);
        formsum->setMinimumSize(QSize(400, 300));
        formsum->setMaximumSize(QSize(400, 300));
        formsum->setStyleSheet(QString::fromUtf8("background-color:white;\n"
""));
        label_5 = new QLabel(formsum);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(90, 170, 21, 20));
        label_5->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 170, 255);\n"
"font: 75 26pt \"Bahnschrift\";"));
        lineEditc1 = new QLineEdit(formsum);
        lineEditc1->setObjectName(QString::fromUtf8("lineEditc1"));
        lineEditc1->setGeometry(QRect(20, 120, 71, 31));
        lineEditc1->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";\n"
"background-color: #bebeb;\n"
"color:rgb(31, 31, 31);"));
        lineEditc1->setMaxLength(4);
        lineEditc3 = new QLineEdit(formsum);
        lineEditc3->setObjectName(QString::fromUtf8("lineEditc3"));
        lineEditc3->setGeometry(QRect(20, 160, 61, 31));
        lineEditc3->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";\n"
"background-color: #bebeb;\n"
"color:rgb(31, 31, 31);"));
        lineEditc3->setMaxLength(4);
        label_2 = new QLabel(formsum);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 130, 21, 20));
        label_2->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 170, 255);\n"
"font: 75 26pt \"Bahnschrift\";"));
        pushButton = new QPushButton(formsum);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(290, 240, 91, 41));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(200, 237, 240);\n"
"background-color:rgb(31, 31, 31);\n"
"border:1px solid rgb(200, 237, 240);"));
        label = new QLabel(formsum);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 130, 21, 20));
        label->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 170, 255);\n"
"font: 75 26pt \"Bahnschrift\";"));
        lineEditc2 = new QLineEdit(formsum);
        lineEditc2->setObjectName(QString::fromUtf8("lineEditc2"));
        lineEditc2->setGeometry(QRect(140, 120, 71, 31));
        lineEditc2->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";\n"
"background-color: #bebeb;\n"
"color:rgb(31, 31, 31);"));
        lineEditc2->setMaxLength(4);
        label_4 = new QLabel(formsum);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(190, 170, 21, 20));
        label_4->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 170, 255);\n"
"font: 75 26pt \"Bahnschrift\";"));
        label_3 = new QLabel(formsum);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(290, 170, 21, 20));
        label_3->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 170, 255);\n"
"font: 75 26pt \"Bahnschrift\";"));
        pushButton_2 = new QPushButton(formsum);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setEnabled(false);
        pushButton_2->setGeometry(QRect(80, 10, 231, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(200, 237, 240);\n"
"background-color:rgb(31, 31, 31);\n"
"border:1px solid rgb(200, 237, 240);"));
        pushButton_3 = new QPushButton(formsum);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 240, 91, 41));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(200, 237, 240);\n"
"background-color:rgb(31, 31, 31);\n"
"border:1px solid rgb(200, 237, 240);"));
        pushButton_6_rs = new QPushButton(formsum);
        pushButton_6_rs->setObjectName(QString::fromUtf8("pushButton_6_rs"));
        pushButton_6_rs->setEnabled(false);
        pushButton_6_rs->setGeometry(QRect(250, 120, 71, 31));
        pushButton_6_rs->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";\n"
"background-color:rgb(31, 31, 31);\n"
"border:none;\n"
"color: rgb(200, 237, 240);\n"
""));
        pushButton_7_rs = new QPushButton(formsum);
        pushButton_7_rs->setObjectName(QString::fromUtf8("pushButton_7_rs"));
        pushButton_7_rs->setEnabled(false);
        pushButton_7_rs->setGeometry(QRect(310, 160, 71, 31));
        pushButton_7_rs->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";\n"
"background-color:rgb(31, 31, 31);\n"
"border:none;\n"
"color: rgb(200, 237, 240);\n"
""));
        lineEditc4 = new QLineEdit(formsum);
        lineEditc4->setObjectName(QString::fromUtf8("lineEditc4"));
        lineEditc4->setGeometry(QRect(110, 160, 71, 31));
        lineEditc4->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";\n"
"background-color: #bebeb;\n"
"color:rgb(31, 31, 31);"));
        lineEditc4->setMaxLength(4);
        lineEditc5 = new QLineEdit(formsum);
        lineEditc5->setObjectName(QString::fromUtf8("lineEditc5"));
        lineEditc5->setGeometry(QRect(210, 160, 71, 31));
        lineEditc5->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";\n"
"background-color: #bebeb;\n"
"color:rgb(31, 31, 31);"));
        lineEditc5->setMaxLength(4);
        pushButton_4 = new QPushButton(formsum);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setEnabled(false);
        pushButton_4->setGeometry(QRect(20, 70, 51, 31));
        pushButton_4->setStyleSheet(QString::fromUtf8("color: rgb(200, 237, 240);\n"
"background-color:rgb(31, 31, 31);\n"
"border:1px solid rgb(200, 237, 240);"));
        pushButton_5 = new QPushButton(formsum);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setEnabled(false);
        pushButton_5->setGeometry(QRect(280, 70, 51, 31));
        pushButton_5->setStyleSheet(QString::fromUtf8("color: rgb(200, 237, 240);\n"
"background-color:rgb(31, 31, 31);\n"
"border:1px solid rgb(200, 237, 240);"));
        pushButton_8_error = new QPushButton(formsum);
        pushButton_8_error->setObjectName(QString::fromUtf8("pushButton_8_error"));
        pushButton_8_error->setEnabled(false);
        pushButton_8_error->setGeometry(QRect(80, 70, 31, 31));
        pushButton_8_error->setStyleSheet(QString::fromUtf8("color: rgb(200, 237, 240);\n"
"background-color:rgb(31, 31, 31);\n"
"border:1px solid rgb(200, 237, 240);"));
        pushButton_9_success = new QPushButton(formsum);
        pushButton_9_success->setObjectName(QString::fromUtf8("pushButton_9_success"));
        pushButton_9_success->setEnabled(false);
        pushButton_9_success->setGeometry(QRect(340, 70, 31, 31));
        pushButton_9_success->setStyleSheet(QString::fromUtf8("color: rgb(200, 237, 240);\n"
"background-color:rgb(31, 31, 31);\n"
"border:1px solid rgb(200, 237, 240);"));
        QWidget::setTabOrder(lineEditc1, lineEditc2);
        QWidget::setTabOrder(lineEditc2, lineEditc3);
        QWidget::setTabOrder(lineEditc3, pushButton);

        retranslateUi(formsum);
        QObject::connect(pushButton_3, SIGNAL(clicked()), formsum, SLOT(close()));

        QMetaObject::connectSlotsByName(formsum);
    } // setupUi

    void retranslateUi(QDialog *formsum)
    {
        formsum->setWindowTitle(QApplication::translate("formsum", "Dialog", nullptr));
        label_5->setText(QApplication::translate("formsum", "+", nullptr));
        label_2->setText(QApplication::translate("formsum", "+", nullptr));
        pushButton->setText(QApplication::translate("formsum", "VERIFY", nullptr));
        label->setText(QApplication::translate("formsum", "=", nullptr));
        label_4->setText(QApplication::translate("formsum", "+", nullptr));
        label_3->setText(QApplication::translate("formsum", "=", nullptr));
        pushButton_2->setText(QApplication::translate("formsum", "GETTING STARTED SUM", nullptr));
        pushButton_3->setText(QApplication::translate("formsum", "<-", nullptr));
        pushButton_6_rs->setText(QString());
        pushButton_7_rs->setText(QString());
        lineEditc4->setText(QString());
        lineEditc5->setText(QString());
        pushButton_4->setText(QApplication::translate("formsum", "Erros", nullptr));
        pushButton_5->setText(QApplication::translate("formsum", "Success", nullptr));
        pushButton_8_error->setText(QApplication::translate("formsum", "00", nullptr));
        pushButton_9_success->setText(QApplication::translate("formsum", "00", nullptr));
    } // retranslateUi

};

namespace Ui {
    class formsum: public Ui_formsum {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMSUM_H
