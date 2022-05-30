#include "mytestmainwindow.h"
#include "ui_mytestmainwindow.h"

MyTestMainWindow::MyTestMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MyTestMainWindow)
{
    ui->setupUi(this);
}

MyTestMainWindow::~MyTestMainWindow()
{
    delete ui;
}
