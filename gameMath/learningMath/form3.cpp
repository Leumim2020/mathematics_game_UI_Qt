#include "form3.h"
#include "ui_form3.h"
#include "mainwindow.h"

form3::form3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::form3)
{
    ui->setupUi(this);
}

form3::~form3()
{
    delete ui;
}

void form3::on_pushButton_3_clicked()
{
    MainWindow *f2 = new MainWindow();
    f2->show();
}

