#include "formsum.h"
#include "ui_formsum.h"
#include "mainwindow.h"
#include <QMessageBox>

formsum::formsum(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formsum)
{
    ui->setupUi(this);

    // initialinzing level one
    ini_results(vt_values);
    result_Qs.setNum(vt_values.at(0));
    ui->pushButton_6_rs->setText(result_Qs);

    // initialinzing level two
    result_Qs.setNum(vt_values.at(45));
    ui->pushButton_7_rs->setText(result_Qs);
    ui->lineEditc3->setEnabled(false);
    ui->lineEditc4->setEnabled(false);
    ui->lineEditc5->setEnabled(false);
}

formsum::~formsum()
{
    delete ui;
}


void formsum::ini_results(std::vector<unsigned int> &results_operation){

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
    MainWindow *f1 = new MainWindow;
    f1->show();
    close();
}


void formsum::on_pushButton_clicked()
{
    // ----------------------------------------------------sum level one------------------------------------------------------
      if(i >= 0 && i < 45){
            on_lineEditc1_textEdited(n1);
            on_lineEditc2_textEdited(n2);
            ini_results(vt_values);
            if(n1 != vt_values.at(i) && n2 != vt_values.at(i)){
                sum_result = n1 + n2;
                sum_level_one(sum_result);
            }else if(n1 == vt_values.at(i) || n2 == vt_values.at(i)){
                QMessageBox::warning(this,"Information","You can't type directly answer please type numbers diferents");
            }
       }

   // ------------------------------------------------------sum level two------------------------------------------------------
    if(i > plays){
        on_lineEditc3_textEdited(n1);
        on_lineEditc4_textEdited(n2);
        on_lineEditc5_textEdited(n3);
        if(n1 != vt_values.at(i) && n2 != vt_values.at(i) && n3 != vt_values.at(i)){
            sum_result = n1 + n2 + n3;
            sum_level_two(sum_result);
        }else if(n1 == vt_values.at(i) || n2 == vt_values.at(i) || n3 == vt_values.at(i)){
            QMessageBox::warning(this,"Information","You can't type directly answer please type numbers diferents");
        }

     }
}

void formsum::on_lineEditc1_textEdited(unsigned int &arg1)
{
    arg1 = ui->lineEditc1->text().toInt();
}

void formsum::on_lineEditc2_textEdited(unsigned int &arg1)
{
    arg1 = ui->lineEditc2->text().toInt();
}

void formsum::on_lineEditc3_textEdited(unsigned int &arg1)
{
    arg1 = ui->lineEditc3->text().toInt();
}


void formsum::on_lineEditc4_textEdited(unsigned int &arg1)
{
    arg1 = ui->lineEditc4->text().toInt();
}

void formsum::on_lineEditc5_textEdited(unsigned int &arg1)
{
    arg1 = ui->lineEditc5->text().toInt();
}

void formsum::sum_level_one(unsigned int sum){

    if(sum == vt_values.at(i)){

        // ----------------------------------------------------------------- restarting lineEdits and shows answer
            i++;
            on_lineEditc1_textEdited(n1=0);
            on_lineEditc2_textEdited(n2=0);
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
                    ui->lineEditc1->setEnabled(false);
                    ui->lineEditc2->setEnabled(false);
                    ui->lineEditc1->setText("");
                    ui->lineEditc2->setText("");
                    ui->pushButton_6_rs->setText("");
                    i++;
         // ------------------------------------------------------------------ activing lineEdits sum level two
                ui->lineEditc3->setEnabled(true);
                ui->lineEditc4->setEnabled(true);
                ui->lineEditc5->setEnabled(true);
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

void formsum::sum_level_two(unsigned int sum){

    if(sum == vt_values.at(i)){

        // ----------------------------------------------------------------- restarting lineEdits and shows answer
            i++;
            on_lineEditc3_textEdited(n1=0);
            on_lineEditc4_textEdited(n2=0);
            on_lineEditc5_textEdited(n2=0);
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
                ui->lineEditc3->setText("");
                ui->lineEditc4->setText("");
                ui->lineEditc5->setText("");
                ui->pushButton_7_rs->setText("");
                ui->lineEditc3->setEnabled(false);
                ui->lineEditc4->setEnabled(false);
                ui->lineEditc5->setEnabled(false);
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

