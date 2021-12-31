#include "mainwindow.h"
#include <QApplication>
#include"loging.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    loging l;
    l.show();


    return a.exec();
}
