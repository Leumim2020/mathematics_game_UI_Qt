#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "formsum.h"
#include "form3.h"
#include "form4.h"
#include "form5.h"

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    audio->setMedia(QUrl::fromLocalFile("C:/gameMath/mathematics_game_UI_Qt/gameMath/learningMath/sounds/welcome.mp3"));
    audio->play();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_4_clicked()
{
    formsum *formsum2 = new formsum;
    formsum2->show();
    hide();
}

void MainWindow::on_pushButton_3_clicked()
{
    form3 *formsub3 = new form3;
    formsub3->show();
    hide();
}

void MainWindow::on_pushButton_2_clicked()
{
    form4 *formmut4 = new form4;
    formmut4->show();
    hide();
}

void MainWindow::on_pushButton_clicked()
{
    form5 *formdiv5 = new form5(this);
    formdiv5->show();
    hide();
}


