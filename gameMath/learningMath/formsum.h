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
    int n1{},n2{},sum_result{};
    char vict_ini{'x'};

public slots:
    void ini_results(std::vector<int> &results_operation);
    void sum_level_one(int v1,int v2,char victory);
    void sum_level_two(int _v1,int _v2,int _v3,char _victory);

private slots:
    void on_pushButton_3_clicked();
    void on_pushButton_clicked();
    void on_lineEditc1_textEdited(int &arg1);
    void on_lineEditc2_textEdited(int &arg1);

private:
    Ui::formsum *ui;};

#endif // FORMSUM_H
