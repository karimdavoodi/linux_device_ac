#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dac.h"

namespace Ui {
class MainWindow;
class dac;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    dac D;
    void refresh_ui();
    void update_conf();

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_block_networkCard_pushButton_clicked();

    void on_unblock_networkCard_pushButton_clicked();

    void on_addDevice_pushButton_clicked();

    void on_remove_pushButton_clicked();

    void on_block_storage_pushButton_clicked();

    void on_unblock_storage_pushButton_clicked();

    void on_refresh_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
