#include "Login.h"

#include <QApplication>
#include<QIcon>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QIcon icon(":/img/images/icon2.png");
    w.setWindowIcon(icon);

    w.show();
    return a.exec();
}
