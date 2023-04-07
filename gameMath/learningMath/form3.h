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

private slots:
    void on_pushButton_3_clicked();

private:
    Ui::form3 *ui;
};

#endif // FORM3_H
