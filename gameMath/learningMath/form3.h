#ifndef FORM3_H
#define FORM3_H

#include <QDialog>

namespace Ui {
class form3;
}

class form3 : public QDialog
{
    Q_OBJECT

public:
    explicit form3(QWidget *parent = nullptr);
    ~form3();

private:
    QString result_Qs;
    std::vector<signed int>vt_values;
    short erros_t{},sucess_t{};
    signed int i{},plays{44},n1{},n2{},n3{},sub_result{};

private slots:
    void on_pushButton_3_clicked();
    void on_lineEdit_c1_textEdited(signed int &arg1);
    void on_lineEdit_c2_textEdited(signed int &arg1);
    void on_lineEdit_c4_textEdited(signed int &arg1);
    void on_lineEdit_c3_textEdited(signed int &arg1);
    void on_lineEdit_c5_textEdited(signed int &arg1);
    // functions the level one and level two
    void ini_results(std::vector<signed int> &results_operation);
    void subtraction_level_one(signed int sub);
    void subtraction_level_two(signed int sub);



    void on_pushButton_clicked();

private:
    Ui::form3 *ui;
};

#endif // FORM3_H
