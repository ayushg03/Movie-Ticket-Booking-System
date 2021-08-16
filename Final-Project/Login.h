#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include "Movies.h"
#include "Ticket_Booking.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_login_clicked();

private:
    Ui::MainWindow *ui;
    SecDialog *secDialog;
};
#endif // LOGIN_H
