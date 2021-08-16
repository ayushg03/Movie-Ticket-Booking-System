#include "Ticket_Booking.h"
#include "ui_Ticket_Booking.h"
#include<Movies.h>
#include<QMessageBox>

thirdDialog::thirdDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::thirdDialog)

{
    ui->setupUi(this);

    this->setWindowTitle("Ticket_Booking");


}

thirdDialog::~thirdDialog()
{
    delete ui;
}


void thirdDialog::on_pushButton_2_clicked()
{
  close();
}


void thirdDialog::on_pushButton_clicked()
{
    float amount=0;
    QString seat;
    if(!ui->A1->isChecked() && !ui->A2->isChecked() && !ui->A3->isChecked() && !ui->A4->isChecked() && !ui->A5->isChecked()
            && !ui->B1->isChecked() && ! ui->B2->isChecked() && !ui->B3->isChecked() && !ui->B4->isChecked() && !ui->B5->isChecked()
            && !ui->C1->isChecked() && !ui->C2->isChecked() && !ui->C3->isChecked() && !ui->C4->isChecked() && !ui->C5->isChecked()){

        QMessageBox::warning(this,"Invalid Entry","Please select seat.");
    }
    if(ui->time->currentIndex()==0){
        QMessageBox::warning(this,"Invalid Entry","Please select time.");
    }
    else{

            if(ui->A1->isChecked()){
                amount+=99;
                seat+="A1 ";
            }
            if(ui->A2->isChecked()){
                amount+=99;
                seat+="A2 ";
            }
            if(ui->A3->isChecked()){
                amount+=99;
                seat+="A3 ";
            }
            if(ui->A4->isChecked()){
                amount+=99;
                seat+="A4 ";
            }
            if(ui->A5->isChecked()){
                amount+=99;
                seat+="A5 ";
            }
            if(ui->B1->isChecked()){
                amount+=112;
                seat+="B1 ";
            }
            if(ui->B2->isChecked()){
                amount+=112;
                seat+="B2 ";
            }
            if(ui->B3->isChecked()){
                amount+=112;
                seat+="B3 ";
            }
            if(ui->B4->isChecked()){
                amount+=112;
                seat+="B4 ";
            }
            if(ui->B5->isChecked()){
                amount+=112;
                seat+="B5 ";
            }
            if(ui->C1->isChecked()){
                amount+=149;
                seat+="C1 ";
            }
            if(ui->C2->isChecked()){
                amount+=149;
                seat+="C2 ";
            }
            if(ui->C3->isChecked()){
                amount+=149;
                seat+="C3 ";
            }
            if(ui->C4->isChecked()){
                amount+=149;
                seat+="C4 ";
            }
            if(ui->C5->isChecked()){
                amount+=149;
                seat+="C5 ";
            }

            QString status=QString("Amount Paid: ₹%1\n").arg(amount);
            QString timing="Timing: "+ ui->time->currentText();
            QString Seat=QString("\nSeat(s) Booked: ")+seat;

            QMessageBox msgbox;
            msgbox.setStyleSheet("background-color:rgb(66,67,62) ;font: 11pt Arial Rounded MT Bold; color:rgb(255,255,255);border-top-left-radius:10px;border-bottom-right-radius:10px");
            msgbox.setText("Ticket booked successfully.");
            msgbox.setInformativeText(status+timing+Seat);
            msgbox.exec();

    }

}


