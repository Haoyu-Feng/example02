#include "mytestmainwindow.h"
#include <QApplication>
#include <QWidget>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyTestMainWindow w;
    w.show();
    //test看看是哪里改了

    return a.exec();
}
