/********************************************************************************
** Form generated from reading UI file 'Login.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_login;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(545, 492);
        MainWindow->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_login{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.438, y2:0.579545, stop:0.176136 rgba(255, 205, 102, 255), stop:0.585227 rgba(253, 190, 0, 255));\n"
"color:rgpa(255,255,255,210);\n"
"border-radius:5px;\n"
"}\n"
"QPushButton#pushButton_login:hover{\n"
"	background-color: qlineargradient(spread:pad, x1:0.0832857, y1:0.392, x2:1, y2:1, stop:0.309091 rgba(176, 190, 197,255), stop:0.981061 rgba(246, 186, 156, 255));\n"
"	\n"
"}\n"
"QPushButton#pushButton_login:pressed{\n"
"padding-left:5px;\n"
"padding-top:5px;\n"
"background-color:rgba(150,123,111,225);\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 20, 280, 430));
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(:/img/images/img.png);\n"
"border-top-left-radius:50px;"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(295, 20, 240, 430));
        label_4->setStyleSheet(QString::fromUtf8("background-color:rgba(255,255,255,255);\n"
"border-bottom-right-radius:50px"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(360, 70, 100, 40));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color:rgba(0,0,0,200);\n"
""));
        lineEdit_username = new QLineEdit(centralwidget);
        lineEdit_username->setObjectName(QString::fromUtf8("lineEdit_username"));
        lineEdit_username->setGeometry(QRect(320, 150, 190, 40));
        QFont font1;
        font1.setPointSize(10);
        lineEdit_username->setFont(font1);
        lineEdit_username->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(46,82,101,200);\n"
"color:rgba(0,0,0,240);\n"
"padding-bottom:7px;\n"
""));
        lineEdit_password = new QLineEdit(centralwidget);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(320, 220, 190, 40));
        lineEdit_password->setFont(font1);
        lineEdit_password->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(46,82,101,200);\n"
"color:rgba(0,0,0,240);\n"
"padding-bottom:7px;\n"
""));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        pushButton_login = new QPushButton(centralwidget);
        pushButton_login->setObjectName(QString::fromUtf8("pushButton_login"));
        pushButton_login->setGeometry(QRect(320, 300, 191, 51));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        pushButton_login->setFont(font2);
        pushButton_login->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setCentralWidget(centralwidget);
        label_4->raise();
        label_3->raise();
        label_5->raise();
        lineEdit_username->raise();
        lineEdit_password->raise();
        pushButton_login->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 545, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "Log In", nullptr));
        lineEdit_username->setPlaceholderText(QCoreApplication::translate("MainWindow", "User Name", nullptr));
        lineEdit_password->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        pushButton_login->setText(QCoreApplication::translate("MainWindow", "Log In", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
