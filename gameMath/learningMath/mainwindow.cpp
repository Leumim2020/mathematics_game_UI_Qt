#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "formsum.h"
#include "form3.h"
#include "form4.h"
#include "form5.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_4_clicked()
{
    formsum *formsum2;
    formsum2 = new formsum(this);
    formsum2->show();
    hide();
}


void MainWindow::on_pushButton_3_clicked()
{
    form3 *formsub3;
    formsub3 = new form3(this);
    formsub3->show();
    hide();
}


void MainWindow::on_pushButton_2_clicked()
{
    form4 *formmut4;
    formmut4 = new form4(this);
    formmut4->show();
    hide();
}


void MainWindow::on_pushButton_clicked()
{
    form5 *formdiv5;
    formdiv5 = new form5(this);
    formdiv5->show();
    hide();
}

