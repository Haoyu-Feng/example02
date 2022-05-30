#include "mytestmainwindow.h"
#include <QApplication>
#include <QWidget>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyTestMainWindow w;
    w.show();

    return a.exec();
}
