#include "Movies.h"
#include "ui_Movies.h"
#include<QDesktopServices>
#include<QUrl>
SecDialog::SecDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Movies");


}

SecDialog::~SecDialog()
{
    delete ui;
}

void SecDialog::on_pushButton_4_clicked()
{
   QString link="https://www.youtube.com/watch?v=A6eZ49O67YQ";
   QDesktopServices::openUrl(QUrl(link));

}

void SecDialog::on_pushButton_5_clicked()
{
    QString link="https://www.youtube.com/watch?v=FqAjVAf5fNA&t=64s";
    QDesktopServices::openUrl(QUrl(link));
}


void SecDialog::on_pushButton_6_clicked()
{

        QString link="https://www.youtube.com/watch?v=eg5ciqQzmK0";
        QDesktopServices::openUrl(QUrl(link));

}


void SecDialog::on_pushButton_clicked()
{

    hide();
    thirddialog= new thirdDialog(this);
    thirddialog->show();
}


void SecDialog::on_pushButton_2_clicked()
{

    hide();
    thirddialog= new thirdDialog(this);
    thirddialog->show();

}


void SecDialog::on_pushButton_3_clicked()
{

    hide();
    thirddialog= new thirdDialog(this);
    thirddialog->show();
}

