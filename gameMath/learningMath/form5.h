#ifndef FORM5_H
#define FORM5_H

#include <QDialog>
#include <QMediaPlayer>
#include <vector>

namespace Ui {
class form5;
}

class form5 : public QDialog
{
    Q_OBJECT

public:
    explicit form5(QWidget *parent = nullptr);
    ~form5();

public:
    QMediaPlayer *audio = new QMediaPlayer;
    QString result_Qs;
    std::vector<float>vt_values;
    unsigned short erros_t{},sucess_t{},plays{44};
    int i{};
    float n1{},n2{},n3{},divd_result{};

private slots:
    void on_pushButton_3_clicked();
    void on_pushButton_clicked();
    void on_lineEdit_c1_textEdited(float &arg1);
    void on_lineEdit_c2_textEdited(float &arg1);
    void on_lineEdit_c3_textEdited(float &arg1);
    void on_lineEdit_c4_textEdited(float &arg1);
    void on_lineEdit_c5_textEdited(float &arg1);
    // functions the level one and level two
    void ini_results(std::vector<float> &results_operation);
    void division_level_one(float divd);
    void division_level_two(float divd);

private:
    Ui::form5 *ui;

};

#endif // FORM5_H
