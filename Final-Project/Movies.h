#ifndef MOVIES_H
#define MOVIES_H

#include <QDialog>
#include "Ticket_Booking.h"
namespace Ui {
class SecDialog;
}

class SecDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SecDialog(QWidget *parent = nullptr);
    ~SecDialog();

QString Movie;
private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::SecDialog *ui;
    thirdDialog *thirddialog;
};

#endif // MOVIES_H
