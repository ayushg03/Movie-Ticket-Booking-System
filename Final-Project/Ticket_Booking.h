#ifndef TICKET_BOOKING_H
#define TICKET_BOOKING_H

#include <QDialog>

namespace Ui {
class thirdDialog;
}

class thirdDialog : public QDialog
{
    Q_OBJECT

public:
    explicit thirdDialog(QWidget *parent = nullptr);
    ~thirdDialog();


private slots:


    void on_pushButton_2_clicked();

    void on_pushButton_clicked();



private:
    Ui::thirdDialog *ui;
};

#endif // TICKET_BOOKING_H
