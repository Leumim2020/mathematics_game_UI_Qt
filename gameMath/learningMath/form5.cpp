#include "form5.h"
#include "ui_form5.h"
#include "mainwindow.h"
#include "QMessageBox"


form5::form5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::form5)
{
    ui->setupUi(this);
    //initializing level one
    ini_results(vt_values);
    result_Qs.setNum(vt_values.at(0));
    ui->pushButton_6_rs->setText(result_Qs);

    //initializing level two
    result_Qs.setNum(vt_values.at(45));
    ui->pushButton_7_rs->setText(result_Qs);
    ui->lineEdit_c3->setEnabled(false);
    ui->lineEdit_c4->setEnabled(false);
    ui->lineEdit_c5->setEnabled(false);
}
void form5::ini_results(std::vector<float> &results_operation){

    results_operation = {10.0,20.0,30.0,40.0,50.0,60.0,70.0,80.0,90.0,100.0,
                         15.0,25.0,35.0,45.0,55.0,65.0,75.0,85.0,95.0,105.0,
                         19.0,29.0,39.0,49.0,59.0,69.0,79.0,89.0,99.0,109.0,
                         110.0,210.0,310.0,410.0,510.0,610.0,710.0,810.0,
                         910.0,1010.0,
                         1550.0,255.0,355.0,455.0,555.0,655.0,755.0,855.0,
                         955.0,1055.0,
                         199.0,299.0,399.0,499.0,599.0,699.0,799.0,899.0,
                         999.0,1999.0,
                         10000.0,20000.0,30000.0,40000.0,50000.0,60000.0,
                         70000.0,80000.0,90000.0,100000.0,
                         10005.0,20005.0,30005.0,40005.0,50005.0,60005.0,
                         70005.0,80005.0,90005.0,1000005.0,
                         19999.0,29999.0,39999.0,49999.0,59999.0,69999.0,
                         79999.0,89999.0,99999.0,199999.0,
                         1000000.0};
}
form5::~form5()
{
    delete ui;
}

void form5::on_pushButton_clicked()
{
    // ---------------------------------------------------- multiplication level one------------------------------------------------------
      if(i >= 0 && i < 45){
            on_lineEdit_c1_textEdited(n1);
            on_lineEdit_c2_textEdited(n2);
            ini_results(vt_values);
            if(n1 != vt_values.at(i) && n2 != vt_values.at(i)){
                divd_result = n1 / n2;
                division_level_one(divd_result);
            }else if(n1 == vt_values.at(i) || n2 == vt_values.at(i)){
                QMessageBox::warning(this,"Information","You can't type directly answer please type numbers diferents");
            }
       }

   // ------------------------------------------------------ multiplication level two------------------------------------------------------
    if(i > plays){
        on_lineEdit_c3_textEdited(n1);
        on_lineEdit_c4_textEdited(n2);
        on_lineEdit_c5_textEdited(n3);
        if(n1 != vt_values.at(i) && n2 != vt_values.at(i) && n3 != vt_values.at(i)){
            divd_result = n1 / n2 / n3;
            division_level_two(divd_result);
        }else if(n1 == vt_values.at(i) || n2 == vt_values.at(i) || n3 == vt_values.at(i)){
            QMessageBox::warning(this,"Information","You can't type directly answer please type numbers diferents");
        }

     }
}


void form5::on_pushButton_3_clicked()
{
    MainWindow *f5 = new MainWindow;
    f5->show();
}

void form5::on_lineEdit_c1_textEdited(float &arg1)
{
    arg1 = ui->lineEdit_c1->text().toInt();
}

void form5::on_lineEdit_c2_textEdited(float &arg1)
{
    arg1 = ui->lineEdit_c2->text().toInt();
}

void form5::on_lineEdit_c3_textEdited(float &arg1)
{
    arg1 = ui->lineEdit_c3->text().toInt();
}

void form5::on_lineEdit_c4_textEdited(float &arg1)
{
    arg1 = ui->lineEdit_c4->text().toInt();
}
void form5::on_lineEdit_c5_textEdited(float &arg1)
{
    arg1 = ui->lineEdit_c5->text().toInt();
}

void form5::division_level_one(float divd){

    if(divd == vt_values.at(i)){

        // ----------------------------------------------------------------- restarting lineEdits and shows answer
            i++;
            on_lineEdit_c1_textEdited(n1=0);
            on_lineEdit_c2_textEdited(n2=0);
            result_Qs.setNum(vt_values.at(i));
            ui->pushButton_6_rs->setText(result_Qs);
        // --------------------------------------------------------------------configurate buttonError
            sucess_t++;
            result_Qs.setNum(sucess_t);
            ui->pushButton_9_success->setText(result_Qs);

         // ----------------------------------------------------------------------------------------------------------- disable level one
            if(i == plays){
                    audio->setMedia(QUrl::fromLocalFile("C:/gameMath/mathematics_game_UI_Qt/gameMath/learningMath/sounds/congrutalions.mp3"));
                    audio->play();

                    QMessageBox::information(this,"Information","Congratulations you passed for next level now with three boxes to fill out");
                    ui->lineEdit_c1->setEnabled(false);
                    ui->lineEdit_c2->setEnabled(false);
                    ui->lineEdit_c1->setText("");
                    ui->lineEdit_c2->setText("");
                    ui->pushButton_6_rs->setText("");
                    i++;
         // ------------------------------------------------------------------ activing lineEdits sum level two
                ui->lineEdit_c3->setEnabled(true);
                ui->lineEdit_c4->setEnabled(true);
                ui->lineEdit_c5->setEnabled(true);
         // -------------------------------------------------------------------end activation
        }//end disable level one

    }else{
        audio->setMedia(QUrl::fromLocalFile("C:/gameMath/mathematics_game_UI_Qt/gameMath/learningMath/sounds/wrong.mp3"));
        audio->play();

        QMessageBox::warning(this,"Information","You are wrong try again");
        // --------------------------------------------------------------------configurate buttonSucess
            erros_t++;
            result_Qs.setNum(erros_t);
            ui->pushButton_8_error->setText(result_Qs);
        //------------------------------------------------------------------------ end configurate
    }

}

void form5::division_level_two(float divd){

    if(divd == vt_values.at(i)){

        // ----------------------------------------------------------------- restarting lineEdits and shows answer
            i++;
            on_lineEdit_c3_textEdited(n1=0);
            on_lineEdit_c4_textEdited(n2=0);
            on_lineEdit_c5_textEdited(n2=0);
            result_Qs.setNum(vt_values.at(i));
            ui->pushButton_7_rs->setText(result_Qs);
        // --------------------------------------------------------------------configurate buttonError
            sucess_t++;
            result_Qs.setNum(sucess_t);
            ui->pushButton_9_success->setText(result_Qs);
         // ------------------------------------------------------------------------------ disable level two and Ending sum level
            if(i == ((plays*2)+1)){
                audio = new QMediaPlayer;
                audio->setMedia(QUrl::fromLocalFile("C:/gameMath/mathematics_game_UI_Qt/gameMath/learningMath/sounds/congrutalions.mp3"));
                audio->play();


                QMessageBox::information(this,"Information","Congratulations you finished and it is ready for addition operations. Click in the arrow to return and choice another operator to learn to use it");
                ui->lineEdit_c3->setText("");
                ui->lineEdit_c4->setText("");
                ui->lineEdit_c5->setText("");
                ui->pushButton_7_rs->setText("");
                ui->lineEdit_c3->setEnabled(false);
                ui->lineEdit_c4->setEnabled(false);
                ui->lineEdit_c5->setEnabled(false);
        }// --------------------------------------------------------------------------end disable

    }else{
        audio->setMedia(QUrl::fromLocalFile("C:/gameMath/mathematics_game_UI_Qt/gameMath/learningMath/sounds/wrong.mp3"));
        audio->play();

        QMessageBox::warning(this,"Information","You are wrong try again");
        // --------------------------------------------------------------------configurate buttonSucess
            erros_t++;
            result_Qs.setNum(erros_t);
            ui->pushButton_8_error->setText(result_Qs);
        //----------------------------------------------------------------- end configurate
    }

}



