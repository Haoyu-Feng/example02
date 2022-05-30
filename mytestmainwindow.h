#ifndef MYTESTMAINWINDOW_H
#define MYTESTMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MyTestMainWindow;
}

class MyTestMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MyTestMainWindow(QWidget *parent = 0);
    ~MyTestMainWindow();

private:
    Ui::MyTestMainWindow *ui;
};

#endif // MYTESTMAINWINDOW_H
