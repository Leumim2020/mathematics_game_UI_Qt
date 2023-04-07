#ifndef FORM4_H
#define FORM4_H

#include <QDialog>

namespace Ui {
class form4;
}

class form4 : public QDialog
{
    Q_OBJECT

public:
    explicit form4(QWidget *parent = nullptr);
    ~form4();

private slots:
    void on_pushButton_3_clicked();

private:
    Ui::form4 *ui;
};

#endif // FORM4_H
