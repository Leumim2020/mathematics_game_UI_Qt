#include "formsum.h"
#include "ui_formsum.h"
#include "mainwindow.h"
#include "QMessageBox"

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


void formsum::ini_results(std::vector<int> &results_operation){

    results_operation = {10,20,30,40,50,60,70,80,90,100,
                         15,25,35,45,55,65,75,85,95,105,
                         19,29,39,49,59,69,79,89,99,109,
                         110,210,310,410,510,610,710,810,
                         910,1010,
                         155,255,355,455,555,655,755,855,
                         955,1055,
                         199,299,399,499,599,699,799,899,
                         999,1999,
                         10000,20000,30000,40000,50000,60000,
                         70000,80000,90000,100000,
                         10005,20005,30005,40005,50005,60005,
                         70005,80005,90005,100005,
                         19999,29999,39999,49999,59999,69999,
                         79999,89999,99999,199999,
                         1000000};
}

void formsum::on_pushButton_3_clicked()
{
    MainWindow *f1 = new MainWindow();
    f1->show();
}


void formsum::on_pushButton_clicked()
{
    on_lineEditc1_textEdited(n1);
    on_lineEditc2_textEdited(n2);
    sum_level_one(n1,n2,vict_ini);
}


void formsum::on_lineEditc1_textEdited(int &arg1)
{
    arg1 = ui->lineEditc1->text().toInt();
}


void formsum::on_lineEditc2_textEdited(int &arg1)
{
    arg1 = ui->lineEditc2->text().toInt();
}

void formsum::sum_level_one(int v1, int v2,char victory){

    std::vector<int>vt_values;
    ini_results(vt_values);

    sum_result = v1 + v2;
}

void formsum::sum_level_two(int _v1,int _v2,int _v3,char _victory){

}

