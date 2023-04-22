#include "form3.h"
#include "ui_form3.h"
#include "mainwindow.h"
#include "QMessageBox"

form3::form3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::form3)
{
    ui->setupUi(this);
    QMessageBox::about(this,"Help","To solve this level you will need to use the signal minus '-' in numbers sometimes");
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

form3::~form3()
{
    delete ui;
}

void form3::ini_results(std::vector<signed int> &results_operation){

    results_operation = {-10,-20,-30,-40,-50,60,70,80,90,100,
                         15,25,35,45,55,-65,-75,-85,-95,-105,
                         -19,-29,-39,-49,-59,69,79,89,99,109,
                         110,210,310,410,510,-610,-710,-810,
                         -910,-1010,
                        -155,-255,-355,-455,-555,655,755,855,
                         955,1055,
                         199,299,399,499,599,-699,-799,-899,
                         -999,-1999,
                         -10000,-20000,-30000,-40000,-50000,60000,
                         70000,80000,90000,100000,
                         10005,20005,30005,40005,-50005,-60005,
                         -70005,-80005,-90005,-100005,
                         -19999,-29999,-39999,-49999,-59999,69999,
                         79999,89999,99999,199999,
                         1000000};
}


void form3::on_pushButton_3_clicked()
{
    MainWindow *f2 = new MainWindow;
    f2->show();
}


void form3::on_lineEdit_c1_textEdited(signed int &arg1)
{
    arg1 = ui->lineEdit_c1->text().toInt();
}


void form3::on_lineEdit_c2_textEdited(signed int &arg1)
{
    arg1 = ui->lineEdit_c2->text().toInt();
}

void form3::on_lineEdit_c3_textEdited(signed int &arg1)
{
    arg1 = ui->lineEdit_c3->text().toInt();
}

void form3::on_lineEdit_c4_textEdited(signed int &arg1)
{
    arg1 = ui->lineEdit_c4->text().toInt();
}

void form3::on_lineEdit_c5_textEdited(signed int &arg1)
{
    arg1 = ui->lineEdit_c5->text().toInt();
}


void form3::on_pushButton_clicked()
{
    // ----------------------------------------------------subtraction level one------------------------------------------------------
      if(i >= 0 && i < 45){
            on_lineEdit_c1_textEdited(n1);
            on_lineEdit_c2_textEdited(n2);
            ini_results(vt_values);
            if(n1 != vt_values.at(i) && n2 != vt_values.at(i)){
                sub_result = n1 - n2;
                subtraction_level_one(sub_result);
            }else if(n1 == vt_values.at(i) || n2 == vt_values.at(i)){
                QMessageBox::warning(this,"Information","You can't type directly answer please type numbers diferents");
            }
       }

   // ------------------------------------------------------subtraction level two------------------------------------------------------
    if(i > plays){
        on_lineEdit_c3_textEdited(n1);
        on_lineEdit_c4_textEdited(n2);
        on_lineEdit_c5_textEdited(n3);
        if(n1 != vt_values.at(i) && n2 != vt_values.at(i) && n3 != vt_values.at(i)){
            sub_result = n1 - n2 - n3;
            subtraction_level_two(sub_result);
        }else if(n1 == vt_values.at(i) || n2 == vt_values.at(i) || n3 == vt_values.at(i)){
            QMessageBox::warning(this,"Information","You can't type directly answer please type numbers diferents");
        }

     }
}
void form3::subtraction_level_one(signed int sub){

    if(sub == vt_values.at(i)){

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
                    audio = new QMediaPlayer;
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

void form3::subtraction_level_two(signed int sub){

    if(sub == vt_values.at(i)){

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



