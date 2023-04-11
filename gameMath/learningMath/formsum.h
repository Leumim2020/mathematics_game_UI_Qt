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
    unsigned int n1{},n2{},sum_result{};
    char vict_ini{'x'};

public: signals:
    void ini_results(std::vector<unsigned int> &results_operation);
    void sum_level_one(unsigned int v1,unsigned int v2,char victory);
    void sum_level_two(unsigned int v1,unsigned int v2,unsigned v3,char victory);

private slots:
    void on_pushButton_3_clicked();
    void on_pushButton_clicked();
    void on_lineEditc1_textEdited(unsigned int &arg1);
    void on_lineEditc2_textEdited(unsigned int &arg1);

private:
    Ui::formsum *ui;};

#endif // FORMSUM_H
