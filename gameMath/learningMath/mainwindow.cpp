#include "mainwindow.h"
#include "ui_mainwindow.h"

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
    formsum2 = new formsum(this);
    formsum2->show();
    hide();
}


void MainWindow::on_pushButton_3_clicked()
{
    formsub3 = new form3(this);
    formsub3->show();
    hide();
}


void MainWindow::on_pushButton_2_clicked()
{
    formmut4 = new form4(this);
    formmut4->show();
    hide();
}


void MainWindow::on_pushButton_clicked()
{
    formdiv5 = new form5(this);
    formdiv5->show();
    hide();
}

