#include "formsum.h"
#include "ui_formsum.h"
#include "mainwindow.h"

formsum::formsum(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formsum)
{
    ui->setupUi(this);
}

formsum::~formsum()
{
    delete ui;
}

void formsum::on_pushButton_3_clicked()
{


}

