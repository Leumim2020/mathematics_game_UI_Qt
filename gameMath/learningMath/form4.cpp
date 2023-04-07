#include "form4.h"
#include "ui_form4.h"
#include "mainwindow.h"

form4::form4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::form4)
{
    ui->setupUi(this);
}

form4::~form4()
{
    delete ui;
}

void form4::on_pushButton_3_clicked()
{
    MainWindow *f4 = new MainWindow();
    f4->show();
}

