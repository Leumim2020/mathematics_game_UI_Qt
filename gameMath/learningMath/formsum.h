#ifndef FORMSUM_H
#define FORMSUM_H

#include <QDialog>

namespace Ui {
class formsum;
}

class formsum : public QDialog
{
    Q_OBJECT

public:
    explicit formsum(QWidget *parent = nullptr);
    ~formsum();

private slots:
    void on_pushButton_3_clicked();

private:
    Ui::formsum *ui;};

#endif // FORMSUM_H
