#include <QProcess>
#include <string.h>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dac.h"
void MainWindow::update_conf()
{
    // update D.conf_devs

    D.enable_dac = ui->activeApp_checkBox->isChecked()?1:0;
    D.block_cdrom_auto = ui->eject_rom_checkBox->isChecked()?1:0;
    D.block_floppy = ui->disable_floppy_checkBox->isChecked()?1:0;
    D.block_lp = ui->disable_printer_checkBox->isChecked()?1:0;
    D.block_network = ui->disable_network_checkBox->isChecked()?1:0;
    D.block_sound = ui->disable_sound_checkBox->isChecked()?1:0;
    D.block_usb = ui->disable_usb_checkBox->isChecked()?1:0;

    D.conf_devs.net_num = ui->blocked_networkCard_tableWidget->rowCount();
    for(int i=0; i<D.conf_devs.net_num; i++)
    {
        strcpy(D.conf_devs.net[i].name,ui->blocked_networkCard_tableWidget->item(i,0)->text().toStdString().c_str());
        strcpy(D.conf_devs.net[i].mac,ui->blocked_networkCard_tableWidget->item(i,1)->text().toStdString().c_str());
    }
    D.conf_devs.usb_num = ui->authorizedDevices_tableWidget->rowCount();
    for(int i=0; i<D.conf_devs.usb_num; i++)
    {
        strcpy(D.conf_devs.usb[i].vendorid,ui->authorizedDevices_tableWidget->item(i,0)->text().toStdString().c_str());
        strcpy(D.conf_devs.usb[i].productid,ui->authorizedDevices_tableWidget->item(i,1)->text().toStdString().c_str());
        strcpy(D.conf_devs.usb[i].serial,ui->authorizedDevices_tableWidget->item(i,2)->text().toStdString().c_str());
        strcpy(D.conf_devs.usb[i].name,ui->authorizedDevices_tableWidget->item(i,3)->text().toStdString().c_str());
    }
    D.conf_devs.scsi_num = ui->blocked_storage_tableWidget->rowCount();
    for(int i=0; i<D.conf_devs.scsi_num; i++)
    {
        strcpy(D.conf_devs.scsi[i].name,ui->blocked_storage_tableWidget->item(i,0)->text().toStdString().c_str());
        strcpy(D.conf_devs.scsi[i].model,ui->blocked_storage_tableWidget->item(i,1)->text().toStdString().c_str());
    }
}
void MainWindow::refresh_ui()
{
    ui->activeApp_checkBox->setChecked(D.enable_dac?true:false);
    ui->disable_usb_checkBox->setChecked(D.block_usb?true:false);
    ui->disable_floppy_checkBox->setChecked(D.block_floppy?true:false);
    ui->disable_network_checkBox->setChecked(D.block_network?true:false);
    ui->disable_printer_checkBox->setChecked(D.block_lp?true:false);
    ui->disable_sound_checkBox->setChecked(D.block_sound?true:false);
    ui->eject_rom_checkBox->setChecked(D.block_cdrom_auto?true:false);
// Net
    for(int i=0; i<D.curr_devs.net_num;i++){
        ui->networkCard_tableWidget->insertRow(i);
        QTableWidgetItem *item1 = new QTableWidgetItem(QString::fromStdString(D.curr_devs.net[i].name));
        ui->networkCard_tableWidget->setItem(i,0,item1);
        QTableWidgetItem *item2 = new QTableWidgetItem(QString::fromStdString(D.curr_devs.net[i].mac));
        ui->networkCard_tableWidget->setItem(i,1,item2);
    }
    for(int i=0; i<D.conf_devs.net_num;i++){
        ui->blocked_networkCard_tableWidget->insertRow(i);
        QTableWidgetItem *item1 = new QTableWidgetItem(QString::fromStdString(D.conf_devs.net[i].name));
        ui->blocked_networkCard_tableWidget->setItem(i,0,item1);
        QTableWidgetItem *item2 = new QTableWidgetItem(QString::fromStdString(D.conf_devs.net[i].mac));
        ui->blocked_networkCard_tableWidget->setItem(i,1,item2);
    }
  //USB
    for(int i=0; i<D.curr_devs.usb_num;i++){
        ui->discovered_tableWidget->insertRow(i);
        QTableWidgetItem *item1 = new QTableWidgetItem(QString::fromStdString(D.curr_devs.usb[i].vendorid));
        ui->discovered_tableWidget->setItem(i,0,item1);
        QTableWidgetItem *item2 = new QTableWidgetItem(QString::fromStdString(D.curr_devs.usb[i].productid));
        ui->discovered_tableWidget->setItem(i,1,item2);
        QTableWidgetItem *item3 = new QTableWidgetItem(QString::fromStdString(D.curr_devs.usb[i].serial));
        ui->discovered_tableWidget->setItem(i,2,item3);
        QTableWidgetItem *item4 = new QTableWidgetItem(QString::fromStdString(D.curr_devs.usb[i].name));
        ui->discovered_tableWidget->setItem(i,3,item4);
    }
    for(int i=0; i<D.conf_devs.usb_num;i++){
        ui->authorizedDevices_tableWidget->insertRow(i);
        QTableWidgetItem *item1 = new QTableWidgetItem(QString::fromStdString(D.conf_devs.usb[i].vendorid));
        ui->authorizedDevices_tableWidget->setItem(i,0,item1);
        QTableWidgetItem *item2 = new QTableWidgetItem(QString::fromStdString(D.conf_devs.usb[i].productid));
        ui->authorizedDevices_tableWidget->setItem(i,1,item2);
        QTableWidgetItem *item3 = new QTableWidgetItem(QString::fromStdString(D.conf_devs.usb[i].serial));
        ui->authorizedDevices_tableWidget->setItem(i,2,item3);
        QTableWidgetItem *item4 = new QTableWidgetItem(QString::fromStdString(D.conf_devs.usb[i].name));
        ui->authorizedDevices_tableWidget->setItem(i,3,item4);
    }
    // SCSI_IDE
    for(int i=0; i<D.curr_devs.scsi_num;i++){
        ui->unblocked_storage_tableWidget->insertRow(i);
        QTableWidgetItem *item1 = new QTableWidgetItem(QString::fromStdString(D.curr_devs.scsi[i].name));
        ui->unblocked_storage_tableWidget->setItem(i,0,item1);
        QTableWidgetItem *item2 = new QTableWidgetItem(QString::fromStdString(D.curr_devs.scsi[i].model));
        ui->unblocked_storage_tableWidget->setItem(i,1,item2);
    }

    for(int i=0; i<D.conf_devs.scsi_num;i++){
        ui->blocked_storage_tableWidget->insertRow(i);
        QTableWidgetItem *item1 = new QTableWidgetItem(QString::fromStdString(D.conf_devs.scsi[i].name));
        ui->blocked_storage_tableWidget->setItem(i,0,item1);
        QTableWidgetItem *item2 = new QTableWidgetItem(QString::fromStdString(D.conf_devs.scsi[i].model));
        ui->blocked_storage_tableWidget->setItem(i,1,item2);
    }

}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    D.read_devices_stat();
    D.read_config_file();
    refresh_ui();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QProcess p;
    update_conf();
    D.write_config();
    if(ui->activeApp_checkBox->isChecked())
        p.start (PROG_NAME,QStringList()<<"stop");
    else
        p.start (PROG_NAME,QStringList()<<"start");

    if (!p.waitForStarted())
        return;
    p.waitForFinished (-1);
    if(p.exitCode()!=0){
            return;
    }
    QApplication::exit(0);

}

void MainWindow::on_pushButton_2_clicked()
{
    QApplication::exit(0);
}

void MainWindow::on_block_networkCard_pushButton_clicked()
{
    QList<QTableWidgetItem *> items;
    items = ui->networkCard_tableWidget->selectedItems();
    while(!(items.isEmpty()))
    {
        QTableWidgetItem *item = new QTableWidgetItem(items.takeFirst()->text());
        int n = ui->blocked_networkCard_tableWidget->rowCount();
        ui->blocked_networkCard_tableWidget->insertRow(n);
        ui->blocked_networkCard_tableWidget->setItem(n,0,item);
        item  = new QTableWidgetItem(items.takeFirst()->text());
        ui->blocked_networkCard_tableWidget->setItem(n,1,item);
    }
}

void MainWindow::on_unblock_networkCard_pushButton_clicked()
{
     QList<QTableWidgetSelectionRange>  list;
     list = ui->blocked_networkCard_tableWidget->selectedRanges();
     while(!list.isEmpty())
     {
         QTableWidgetSelectionRange r = list.takeFirst();
         int b = r.bottomRow();
         int t = r.topRow();
         for (int i=b; i<=t; i++)
            ui->blocked_networkCard_tableWidget->removeRow(i);
     }

}

void MainWindow::on_addDevice_pushButton_clicked()
{
    QList<QTableWidgetItem *> items;

    items = ui->discovered_tableWidget->selectedItems();
    while(!(items.isEmpty()))
    {
        QTableWidgetItem *item = new QTableWidgetItem(items.takeFirst()->text());
        int n = ui->authorizedDevices_tableWidget->rowCount();
        ui->authorizedDevices_tableWidget->insertRow(n);
        ui->authorizedDevices_tableWidget->setItem(n,0,item);
        item  = new QTableWidgetItem(items.takeFirst()->text());
        ui->authorizedDevices_tableWidget->setItem(n,1,item);
        item  = new QTableWidgetItem(items.takeFirst()->text());
        ui->authorizedDevices_tableWidget->setItem(n,2,item);
        item  = new QTableWidgetItem(items.takeFirst()->text());
        ui->authorizedDevices_tableWidget->setItem(n,3,item);
    }
}

void MainWindow::on_remove_pushButton_clicked()
{
    QList<QTableWidgetSelectionRange>  list;
    list = ui->authorizedDevices_tableWidget->selectedRanges();
    while(!list.isEmpty())
    {
        QTableWidgetSelectionRange r = list.takeFirst();
        int b = r.bottomRow();
        int t = r.topRow();
        for (int i=b; i<=t; i++)
           ui->authorizedDevices_tableWidget->removeRow(i);
    }
}

void MainWindow::on_block_storage_pushButton_clicked()
{
    QList<QTableWidgetItem *> items;

    items = ui->unblocked_storage_tableWidget->selectedItems();
    while(!(items.isEmpty()))
    {
        QTableWidgetItem *item = new QTableWidgetItem(items.takeFirst()->text());
        int n = ui->blocked_storage_tableWidget->rowCount();
        ui->blocked_storage_tableWidget->insertRow(n);
        ui->blocked_storage_tableWidget->setItem(n,0,item);
        item  = new QTableWidgetItem(items.takeFirst()->text());
        ui->blocked_storage_tableWidget->setItem(n,1,item);
    }
}

void MainWindow::on_unblock_storage_pushButton_clicked()
{
    QList<QTableWidgetSelectionRange>  list;
    list = ui->blocked_storage_tableWidget->selectedRanges();
    while(!list.isEmpty())
    {
        QTableWidgetSelectionRange r = list.takeFirst();
        int b = r.bottomRow();
        int t = r.topRow();
        for (int i=b; i<=t; i++)
           ui->blocked_storage_tableWidget->removeRow(i);
    }
}

void MainWindow::on_refresh_pushButton_clicked()
{
    D.read_devices_stat();
    for(int i=0; i<ui->discovered_tableWidget->rowCount(); i++)
        ui->discovered_tableWidget->removeRow(i);
    for(int i=0; i<D.curr_devs.usb_num;i++){
        ui->discovered_tableWidget->insertRow(i);
        QTableWidgetItem *item1 = new QTableWidgetItem(QString::fromStdString(D.curr_devs.usb[i].vendorid));
        ui->discovered_tableWidget->setItem(i,0,item1);
        QTableWidgetItem *item2 = new QTableWidgetItem(QString::fromStdString(D.curr_devs.usb[i].productid));
        ui->discovered_tableWidget->setItem(i,1,item2);
        QTableWidgetItem *item3 = new QTableWidgetItem(QString::fromStdString(D.curr_devs.usb[i].serial));
        ui->discovered_tableWidget->setItem(i,2,item3);
        QTableWidgetItem *item4 = new QTableWidgetItem(QString::fromStdString(D.curr_devs.usb[i].name));
        ui->discovered_tableWidget->setItem(i,3,item4);
    }
}
