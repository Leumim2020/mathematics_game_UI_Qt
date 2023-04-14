#ifndef FORMSUM_H
#define FORMSUM_H

#include <QDialog>
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
    QString result_Qs;
    std::vector<int>vt_values;
    int i{0},plays{35},n1{},n2{},sum_result{};


public slots:
    void ini_results(std::vector<int> &results_operation);
    void sum_level_one(int sum);
    void sum_level_two(int sum);

private slots:
    void on_pushButton_3_clicked();
    void on_pushButton_clicked();
    void on_lineEditc1_textEdited(int &arg1);
    void on_lineEditc2_textEdited(int &arg1);

private:
    Ui::formsum *ui;};

#endif // FORMSUM_H
