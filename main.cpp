#include "mainwindow.h"
#include "player.h"
#include <QApplication>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    w.setFixedSize(800,550);
    return a.exec();
}
