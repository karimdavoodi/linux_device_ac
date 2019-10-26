#include <QtGui/QApplication>
#include <QMessageBox>
#include "mainwindow.h"
#include "dac.h"

int main(int argc, char *argv[])
{
    int uid;
    QApplication a(argc, argv);
    MainWindow w;
    uid = getuid();
    if(uid){
        QMessageBox M;
        M.setText("Please Run with 'root'");
        M.exec();
        return 0;
    }
    w.show();
    return a.exec();
}
