// (c) 2020 Dzoka
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    w.setWindowState(Qt::WindowFullScreen);
    return a.exec();
}
