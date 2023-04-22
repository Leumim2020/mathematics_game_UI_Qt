#ifndef FORM4_H
#define FORM4_H

#include <QDialog>
#include <QMediaPlayer>
#include <vector>

namespace Ui {
class form4;
}

class form4 : public QDialog
{
    Q_OBJECT

public:
    explicit form4(QWidget *parent = nullptr);
    ~form4();

public:
    QMediaPlayer *audio = new QMediaPlayer;
    QString result_Qs;
    std::vector<float>vt_values;
    unsigned short erros_t{},sucess_t{},plays{44};
    int i{};
    float n1{},n2{},n3{},multip_result{};

private slots:
    void on_pushButton_clicked();
    void on_pushButton_3_clicked();
    void on_lineEdit_c1_textEdited(float &arg1);
    void on_lineEdit_c2_textEdited(float &arg1);
    void on_lineEdit_c3_textEdited(float &arg1);
    void on_lineEdit_c4_textEdited(float &arg1);
    void on_lineEdit_c5_textEdited(float &arg1);
    // functions the level one and level two
    void ini_results(std::vector<float> &results_operation);
    void multiplication_level_one(float multip);
    void multiplication_level_two(float multip);

private:
    Ui::form4 *ui;
};

#endif // FORM4_H
