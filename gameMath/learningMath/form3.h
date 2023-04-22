#ifndef FORM3_H
#define FORM3_H

#include <QDialog>
#include <QMediaPlayer>
#include <vector>

namespace Ui {
class form3;
}

class form3 : public QDialog
{
    Q_OBJECT

public:
    explicit form3(QWidget *parent = nullptr);
    ~form3();

public:
    QMediaPlayer *audio = new QMediaPlayer;
    QString result_Qs;
    std::vector<signed int>vt_values;
    unsigned short erros_t{},sucess_t{},plays{44};
    int i{};
    signed int n1{},n2{},n3{},sub_result{};

private slots:
    void on_pushButton_3_clicked();
    void on_pushButton_clicked();
    void on_lineEdit_c1_textEdited(signed int &arg1);
    void on_lineEdit_c2_textEdited(signed int &arg1);
    void on_lineEdit_c4_textEdited(signed int &arg1);
    void on_lineEdit_c3_textEdited(signed int &arg1);
    void on_lineEdit_c5_textEdited(signed int &arg1);
    // functions the level one and level two
    void ini_results(std::vector<signed int> &results_operation);
    void subtraction_level_one(signed int sub);
    void subtraction_level_two(signed int sub);

private:
    Ui::form3 *ui;
};

#endif // FORM3_H
