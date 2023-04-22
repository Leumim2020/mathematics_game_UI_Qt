#ifndef FORMSUM_H
#define FORMSUM_H

#include <QDialog>
#include <QMediaPlayer>
#include <vector>

namespace Ui {
class formsum;
}

class formsum : public QDialog
{
    Q_OBJECT

public:
    explicit formsum(QWidget *parent = nullptr);
    ~formsum();

public:
    QMediaPlayer *audio = new QMediaPlayer;
    QString result_Qs;
    std::vector<unsigned int>vt_values;
    unsigned short erros_t{},sucess_t{},plays{44};
    unsigned int n1{},n2{},n3{},sum_result{};
    int i{};

private slots:
    void on_pushButton_3_clicked();
    void on_pushButton_clicked();
    void on_lineEditc1_textEdited(unsigned int &arg1);
    void on_lineEditc2_textEdited(unsigned int &arg1);
    void on_lineEditc3_textEdited(unsigned int &arg1);
    void on_lineEditc4_textEdited(unsigned int &arg1);
    void on_lineEditc5_textEdited(unsigned int &arg1);
    // functions the level one and level two
    void ini_results(std::vector<unsigned int> &results_operation);
    void sum_level_one(unsigned int sum);
    void sum_level_two(unsigned int sum);

private:
    Ui::formsum *ui;};

#endif // FORMSUM_H
