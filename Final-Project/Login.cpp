#include "Login.h"
#include "ui_Login.h"
#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Login");


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_login_clicked()
{
    QString username=ui->lineEdit_username->text();
    QString password=ui->lineEdit_password->text();

    if(username=="Ayush" && password=="Ayush"){
      hide();
      secDialog=new SecDialog(this);
      secDialog->show();
    }
    else{

        QMessageBox msgbox1;

        msgbox1.warning(this,"Invalid Entry","Username or Password incorrect.");

    }
}

