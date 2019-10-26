/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed Nov 20 10:27:38 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionFullscreen;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QAction *actionHelp;
    QAction *actionEXIT;
    QWidget *centralWidget;
    QCheckBox *activeApp_checkBox;
    QTabWidget *tabWidget;
    QWidget *settings_tab;
    QFrame *frame;
    QCheckBox *disable_sound_checkBox;
    QCheckBox *disable_usb_checkBox;
    QCheckBox *disable_floppy_checkBox;
    QCheckBox *disable_printer_checkBox;
    QCheckBox *eject_rom_checkBox;
    QCheckBox *disable_network_checkBox;
    QLabel *label_5;
    QLabel *label_6;
    QTableWidget *networkCard_tableWidget;
    QTableWidget *blocked_networkCard_tableWidget;
    QPushButton *block_networkCard_pushButton;
    QPushButton *unblock_networkCard_pushButton;
    QWidget *tab;
    QLabel *label;
    QTableWidget *discovered_tableWidget;
    QPushButton *addDevice_pushButton;
    QPushButton *refresh_pushButton;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_2;
    QFrame *line;
    QPushButton *remove_pushButton;
    QFrame *line_3;
    QTableWidget *authorizedDevices_tableWidget;
    QFrame *line_2;
    QFrame *line_4;
    QWidget *tab_2;
    QLabel *label_7;
    QFrame *line_9;
    QTableWidget *unblocked_storage_tableWidget;
    QPushButton *block_storage_pushButton;
    QTableWidget *blocked_storage_tableWidget;
    QPushButton *unblock_storage_pushButton;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_13;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_8;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->setEnabled(true);
        MainWindow->resize(895, 523);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(895, 523));
        MainWindow->setMaximumSize(QSize(895, 523));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/usb_hd.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        actionFullscreen = new QAction(MainWindow);
        actionFullscreen->setObjectName(QString::fromUtf8("actionFullscreen"));
        actionFullscreen->setCheckable(true);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAbout_Qt = new QAction(MainWindow);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        actionEXIT = new QAction(MainWindow);
        actionEXIT->setObjectName(QString::fromUtf8("actionEXIT"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setMinimumSize(QSize(895, 501));
        centralWidget->setMaximumSize(QSize(895, 501));
        activeApp_checkBox = new QCheckBox(centralWidget);
        activeApp_checkBox->setObjectName(QString::fromUtf8("activeApp_checkBox"));
        activeApp_checkBox->setGeometry(QRect(667, 40, 201, 26));
        activeApp_checkBox->setLayoutDirection(Qt::RightToLeft);
        activeApp_checkBox->setChecked(true);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 70, 871, 391));
        tabWidget->setLayoutDirection(Qt::RightToLeft);
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(30, 30));
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        settings_tab = new QWidget();
        settings_tab->setObjectName(QString::fromUtf8("settings_tab"));
        frame = new QFrame(settings_tab);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(620, 10, 231, 211));
        frame->setLayoutDirection(Qt::RightToLeft);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        disable_sound_checkBox = new QCheckBox(frame);
        disable_sound_checkBox->setObjectName(QString::fromUtf8("disable_sound_checkBox"));
        disable_sound_checkBox->setGeometry(QRect(10, 10, 187, 26));
        disable_sound_checkBox->setLayoutDirection(Qt::LeftToRight);
        disable_usb_checkBox = new QCheckBox(frame);
        disable_usb_checkBox->setObjectName(QString::fromUtf8("disable_usb_checkBox"));
        disable_usb_checkBox->setGeometry(QRect(10, 42, 229, 26));
        disable_usb_checkBox->setLayoutDirection(Qt::LeftToRight);
        disable_usb_checkBox->setChecked(false);
        disable_floppy_checkBox = new QCheckBox(frame);
        disable_floppy_checkBox->setObjectName(QString::fromUtf8("disable_floppy_checkBox"));
        disable_floppy_checkBox->setGeometry(QRect(10, 74, 157, 26));
        disable_floppy_checkBox->setLayoutDirection(Qt::LeftToRight);
        disable_printer_checkBox = new QCheckBox(frame);
        disable_printer_checkBox->setObjectName(QString::fromUtf8("disable_printer_checkBox"));
        disable_printer_checkBox->setGeometry(QRect(10, 106, 159, 26));
        disable_printer_checkBox->setLayoutDirection(Qt::LeftToRight);
        eject_rom_checkBox = new QCheckBox(frame);
        eject_rom_checkBox->setObjectName(QString::fromUtf8("eject_rom_checkBox"));
        eject_rom_checkBox->setGeometry(QRect(10, 140, 191, 26));
        eject_rom_checkBox->setLayoutDirection(Qt::LeftToRight);
        disable_network_checkBox = new QCheckBox(frame);
        disable_network_checkBox->setObjectName(QString::fromUtf8("disable_network_checkBox"));
        disable_network_checkBox->setGeometry(QRect(10, 170, 197, 26));
        disable_network_checkBox->setLayoutDirection(Qt::LeftToRight);
        label_5 = new QLabel(settings_tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(400, 20, 128, 21));
        label_5->setLayoutDirection(Qt::RightToLeft);
        label_6 = new QLabel(settings_tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(90, 20, 141, 21));
        label_6->setLayoutDirection(Qt::RightToLeft);
        networkCard_tableWidget = new QTableWidget(settings_tab);
        if (networkCard_tableWidget->columnCount() < 2)
            networkCard_tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        networkCard_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        networkCard_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        networkCard_tableWidget->setObjectName(QString::fromUtf8("networkCard_tableWidget"));
        networkCard_tableWidget->setGeometry(QRect(310, 40, 301, 192));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(networkCard_tableWidget->sizePolicy().hasHeightForWidth());
        networkCard_tableWidget->setSizePolicy(sizePolicy1);
        networkCard_tableWidget->setLayoutDirection(Qt::RightToLeft);
        networkCard_tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        networkCard_tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        networkCard_tableWidget->setAutoScroll(true);
        networkCard_tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        networkCard_tableWidget->setSelectionMode(QAbstractItemView::MultiSelection);
        networkCard_tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        networkCard_tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        networkCard_tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        networkCard_tableWidget->horizontalHeader()->setStretchLastSection(false);
        networkCard_tableWidget->verticalHeader()->setCascadingSectionResizes(false);
        networkCard_tableWidget->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        networkCard_tableWidget->verticalHeader()->setStretchLastSection(false);
        blocked_networkCard_tableWidget = new QTableWidget(settings_tab);
        if (blocked_networkCard_tableWidget->columnCount() < 2)
            blocked_networkCard_tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        blocked_networkCard_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        blocked_networkCard_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        blocked_networkCard_tableWidget->setObjectName(QString::fromUtf8("blocked_networkCard_tableWidget"));
        blocked_networkCard_tableWidget->setGeometry(QRect(5, 40, 281, 192));
        sizePolicy1.setHeightForWidth(blocked_networkCard_tableWidget->sizePolicy().hasHeightForWidth());
        blocked_networkCard_tableWidget->setSizePolicy(sizePolicy1);
        blocked_networkCard_tableWidget->setLayoutDirection(Qt::RightToLeft);
        blocked_networkCard_tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        blocked_networkCard_tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        blocked_networkCard_tableWidget->setAutoScroll(true);
        blocked_networkCard_tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        blocked_networkCard_tableWidget->setSelectionMode(QAbstractItemView::MultiSelection);
        blocked_networkCard_tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        blocked_networkCard_tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        blocked_networkCard_tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        blocked_networkCard_tableWidget->horizontalHeader()->setStretchLastSection(false);
        blocked_networkCard_tableWidget->verticalHeader()->setCascadingSectionResizes(false);
        blocked_networkCard_tableWidget->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        blocked_networkCard_tableWidget->verticalHeader()->setStretchLastSection(false);
        block_networkCard_pushButton = new QPushButton(settings_tab);
        block_networkCard_pushButton->setObjectName(QString::fromUtf8("block_networkCard_pushButton"));
        block_networkCard_pushButton->setGeometry(QRect(410, 240, 104, 31));
        unblock_networkCard_pushButton = new QPushButton(settings_tab);
        unblock_networkCard_pushButton->setObjectName(QString::fromUtf8("unblock_networkCard_pushButton"));
        unblock_networkCard_pushButton->setGeometry(QRect(90, 240, 101, 31));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../data/settings.png"), QSize(), QIcon::Normal, QIcon::On);
        tabWidget->addTab(settings_tab, icon1, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(242, 10, 431, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Century Schoolbook L"));
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setLayoutDirection(Qt::RightToLeft);
        discovered_tableWidget = new QTableWidget(tab);
        if (discovered_tableWidget->columnCount() < 4)
            discovered_tableWidget->setColumnCount(4);
        QFont font1;
        font1.setPointSize(8);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font1);
        discovered_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font1);
        discovered_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        discovered_tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setFont(font1);
        discovered_tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        discovered_tableWidget->setObjectName(QString::fromUtf8("discovered_tableWidget"));
        discovered_tableWidget->setGeometry(QRect(20, 30, 661, 151));
        discovered_tableWidget->setMinimumSize(QSize(661, 151));
        discovered_tableWidget->setLayoutDirection(Qt::RightToLeft);
        discovered_tableWidget->setFrameShape(QFrame::StyledPanel);
        discovered_tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        discovered_tableWidget->setTabKeyNavigation(false);
        discovered_tableWidget->setSelectionMode(QAbstractItemView::MultiSelection);
        discovered_tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        discovered_tableWidget->setGridStyle(Qt::SolidLine);
        discovered_tableWidget->setSortingEnabled(true);
        discovered_tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        discovered_tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        discovered_tableWidget->horizontalHeader()->setStretchLastSection(true);
        addDevice_pushButton = new QPushButton(tab);
        addDevice_pushButton->setObjectName(QString::fromUtf8("addDevice_pushButton"));
        addDevice_pushButton->setGeometry(QRect(720, 80, 121, 31));
        refresh_pushButton = new QPushButton(tab);
        refresh_pushButton->setObjectName(QString::fromUtf8("refresh_pushButton"));
        refresh_pushButton->setGeometry(QRect(720, 130, 121, 31));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(690, 200, 171, 21));
        QFont font2;
        font2.setBold(false);
        font2.setWeight(50);
        label_4->setFont(font2);
        label_4->setLayoutDirection(Qt::RightToLeft);
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(233, 425, 16, 20));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(700, 30, 151, 21));
        label_2->setFont(font2);
        label_2->setLayoutDirection(Qt::RightToLeft);
        line = new QFrame(tab);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(-10, 180, 921, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        remove_pushButton = new QPushButton(tab);
        remove_pushButton->setObjectName(QString::fromUtf8("remove_pushButton"));
        remove_pushButton->setGeometry(QRect(720, 250, 121, 31));
        line_3 = new QFrame(tab);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(681, 215, 20, 131));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        authorizedDevices_tableWidget = new QTableWidget(tab);
        if (authorizedDevices_tableWidget->columnCount() < 4)
            authorizedDevices_tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setFont(font1);
        authorizedDevices_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setFont(font1);
        authorizedDevices_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        authorizedDevices_tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem10);
        QFont font3;
        font3.setPointSize(8);
        font3.setStrikeOut(false);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setFont(font3);
        authorizedDevices_tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem11);
        authorizedDevices_tableWidget->setObjectName(QString::fromUtf8("authorizedDevices_tableWidget"));
        authorizedDevices_tableWidget->setGeometry(QRect(15, 200, 671, 141));
        authorizedDevices_tableWidget->setLayoutDirection(Qt::RightToLeft);
        authorizedDevices_tableWidget->setFrameShape(QFrame::StyledPanel);
        authorizedDevices_tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        authorizedDevices_tableWidget->setTabKeyNavigation(false);
        authorizedDevices_tableWidget->setSelectionMode(QAbstractItemView::MultiSelection);
        authorizedDevices_tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        authorizedDevices_tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        authorizedDevices_tableWidget->horizontalHeader()->setStretchLastSection(true);
        line_2 = new QFrame(tab);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(681, -1, 20, 221));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(tab);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(0, 340, 899, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../data/drive_harddisk_usb.png"), QSize(), QIcon::Normal, QIcon::On);
        tabWidget->addTab(tab, icon2, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(360, 50, 191, 21));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        label_7->setFont(font4);
        label_7->setLayoutDirection(Qt::RightToLeft);
        line_9 = new QFrame(tab_2);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setGeometry(QRect(9, 36, 899, 16));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);
        unblocked_storage_tableWidget = new QTableWidget(tab_2);
        if (unblocked_storage_tableWidget->columnCount() < 2)
            unblocked_storage_tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        unblocked_storage_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        unblocked_storage_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem13);
        unblocked_storage_tableWidget->setObjectName(QString::fromUtf8("unblocked_storage_tableWidget"));
        unblocked_storage_tableWidget->setGeometry(QRect(475, 120, 371, 141));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(unblocked_storage_tableWidget->sizePolicy().hasHeightForWidth());
        unblocked_storage_tableWidget->setSizePolicy(sizePolicy2);
        unblocked_storage_tableWidget->setLayoutDirection(Qt::RightToLeft);
        unblocked_storage_tableWidget->setSelectionMode(QAbstractItemView::MultiSelection);
        unblocked_storage_tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        block_storage_pushButton = new QPushButton(tab_2);
        block_storage_pushButton->setObjectName(QString::fromUtf8("block_storage_pushButton"));
        block_storage_pushButton->setGeometry(QRect(550, 280, 201, 31));
        blocked_storage_tableWidget = new QTableWidget(tab_2);
        if (blocked_storage_tableWidget->columnCount() < 2)
            blocked_storage_tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        blocked_storage_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        blocked_storage_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem15);
        blocked_storage_tableWidget->setObjectName(QString::fromUtf8("blocked_storage_tableWidget"));
        blocked_storage_tableWidget->setGeometry(QRect(30, 120, 401, 141));
        sizePolicy2.setHeightForWidth(blocked_storage_tableWidget->sizePolicy().hasHeightForWidth());
        blocked_storage_tableWidget->setSizePolicy(sizePolicy2);
        blocked_storage_tableWidget->setLayoutDirection(Qt::RightToLeft);
        blocked_storage_tableWidget->setSelectionMode(QAbstractItemView::MultiSelection);
        blocked_storage_tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        unblock_storage_pushButton = new QPushButton(tab_2);
        unblock_storage_pushButton->setObjectName(QString::fromUtf8("unblock_storage_pushButton"));
        unblock_storage_pushButton->setGeometry(QRect(130, 280, 201, 31));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(610, 100, 141, 21));
        label_9->setFont(font4);
        label_9->setLayoutDirection(Qt::RightToLeft);
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(120, 100, 161, 21));
        label_10->setFont(font4);
        label_10->setLayoutDirection(Qt::RightToLeft);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../data/disc_drive.png"), QSize(), QIcon::Normal, QIcon::On);
        tabWidget->addTab(tab_2, icon3, QString());
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(350, 10, 211, 31));
        QFont font5;
        font5.setFamily(QString::fromUtf8("B Badr"));
        font5.setPointSize(18);
        font5.setBold(true);
        font5.setWeight(75);
        label_13->setFont(font5);
        label_13->setLayoutDirection(Qt::RightToLeft);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(510, 470, 80, 26));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 470, 80, 26));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 10, 71, 21));
        label_8->setFont(font2);
        label_8->setLayoutDirection(Qt::RightToLeft);
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(actionEXIT, SIGNAL(triggered()), MainWindow, SLOT(close()));
        QObject::connect(activeApp_checkBox, SIGNAL(toggled(bool)), tabWidget, SLOT(setEnabled(bool)));
        QObject::connect(refresh_pushButton, SIGNAL(clicked()), discovered_tableWidget, SLOT(clearContents()));
        QObject::connect(tabWidget, SIGNAL(currentChanged(int)), authorizedDevices_tableWidget, SLOT(resizeColumnsToContents()));
        QObject::connect(tabWidget, SIGNAL(currentChanged(int)), discovered_tableWidget, SLOT(resizeColumnsToContents()));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "deviceController", 0, QApplication::UnicodeUTF8));
        actionFullscreen->setText(QApplication::translate("MainWindow", "Fullscreen", 0, QApplication::UnicodeUTF8));
        actionFullscreen->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+F11", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        actionAbout_Qt->setText(QApplication::translate("MainWindow", "About Qt", 0, QApplication::UnicodeUTF8));
        actionHelp->setText(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
        actionHelp->setShortcut(QApplication::translate("MainWindow", "F1", 0, QApplication::UnicodeUTF8));
        actionEXIT->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        activeApp_checkBox->setText(QApplication::translate("MainWindow", "\331\201\330\271\330\247\331\204 \330\263\330\247\330\262\333\214 \331\206\330\261\331\205 \330\247\331\201\330\262\330\247\330\261", 0, QApplication::UnicodeUTF8));
        disable_sound_checkBox->setText(QApplication::translate("MainWindow", "\330\272\333\214\330\261\331\201\330\271\330\247\331\204 \330\263\330\247\330\262\333\214 \330\257\330\261\332\257\330\247\331\207 \330\265\330\257\330\247", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        disable_usb_checkBox->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        disable_usb_checkBox->setText(QApplication::translate("MainWindow", "\330\272\333\214\330\261\331\201\330\271\330\247\331\204 \330\263\330\247\330\262\333\214 \330\257\330\261\332\257\330\247\331\207 \333\214\331\210 \330\247\330\263 \330\247\330\250\333\214 ", 0, QApplication::UnicodeUTF8));
        disable_floppy_checkBox->setText(QApplication::translate("MainWindow", "\330\272\333\214\330\261\331\201\330\271\330\247\331\204 \330\263\330\247\330\262\333\214 \331\201\331\204\330\247\331\276\333\214", 0, QApplication::UnicodeUTF8));
        disable_printer_checkBox->setText(QApplication::translate("MainWindow", "\330\272\333\214\330\261\331\201\330\271\330\247\331\204 \330\263\330\247\330\262\333\214 \332\206\330\247\331\276\332\257\330\261", 0, QApplication::UnicodeUTF8));
        eject_rom_checkBox->setText(QApplication::translate("MainWindow", "\330\250\333\214\330\261\331\210\331\206 \330\261\330\247\331\206\330\257\331\206 \330\256\331\210\330\257\332\251\330\247\330\261 \330\257\333\214\330\263\332\251", 0, QApplication::UnicodeUTF8));
        disable_network_checkBox->setText(QApplication::translate("MainWindow", "\330\272\333\214\330\261\331\201\330\271\330\247\331\204 \330\263\330\247\330\262\333\214 \330\257\330\261\332\257\330\247\331\207 \330\264\330\250\332\251\331\207", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "\330\252\330\254\331\207\333\214\330\262\330\247\330\252 \330\264\330\250\332\251\331\207 \331\201\330\271\330\247\331\204", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "\330\252\330\254\331\207\333\214\330\262\330\247\330\252 \330\264\330\250\332\251\331\207 \331\205\330\263\330\257\331\210\330\257", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = networkCard_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\331\206\330\247\331\205 \332\251\330\247\330\261\330\252 \330\264\330\250\332\251\331\207", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = networkCard_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\330\242\330\257\330\261\330\263 \330\263\330\256\330\252 \330\247\331\201\330\262\330\247\330\261\333\214", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = blocked_networkCard_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\331\206\330\247\331\205 \332\251\330\247\330\261\330\252 \330\264\330\250\332\251\331\207", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = blocked_networkCard_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\330\242\330\257\330\261\330\263 \330\263\330\256\330\252 \330\247\331\201\330\262\330\247\330\261\333\214", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        block_networkCard_pushButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\331\205\330\263\330\257\331\210\330\257 \331\206\331\205\331\210\330\257\331\206 \330\252\330\254\331\207\333\214\330\262\330\247\330\252 \330\264\330\250\332\251\331\207 \330\247\331\206\330\252\330\256\330\247\330\250 \330\264\330\257\331\207</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        block_networkCard_pushButton->setText(QApplication::translate("MainWindow", "\331\205\330\263\330\257\331\210\330\257 \331\206\331\205\331\210\330\257\331\206", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        unblock_networkCard_pushButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\330\261\331\201\330\271 \330\247\331\206\330\263\330\257\330\247\330\257 \330\252\330\254\331\207\333\214\330\262\330\247\330\252 \330\264\330\250\332\251\331\207 \330\247\331\206\330\252\330\256\330\247\330\250 \330\264\330\257\331\207</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        unblock_networkCard_pushButton->setText(QApplication::translate("MainWindow", "\330\255\330\260\331\201 \332\251\330\261\330\257\331\206", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(settings_tab), QApplication::translate("MainWindow", "\330\252\331\206\330\270\333\214\331\205\330\247\330\252 \332\251\331\204\333\214", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "\331\204\330\267\331\201\330\247 \331\210\330\247\330\255\330\257 \330\261\330\263\330\247\331\206\331\207 \330\256\331\210\330\257 \330\261\330\247 \330\250\331\207 \330\257\330\261\332\257\330\247\331\207 \331\205\330\252\330\265\331\204 \331\206\331\205\330\247\333\214\333\214\330\257", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = discovered_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "\331\205\330\264\330\256\330\265\331\207 \330\252\331\210\331\204\333\214\330\257 \332\251\331\206\331\206\330\257\331\207", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = discovered_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "\331\205\330\264\330\256\330\265\331\207 \331\205\330\255\330\265\331\210\331\204", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = discovered_tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "\330\263\330\261\333\214\330\247\331\204", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = discovered_tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "\331\206\330\247\331\205", 0, QApplication::UnicodeUTF8));
        addDevice_pushButton->setText(QApplication::translate("MainWindow", "\330\247\330\266\330\247\331\201\331\207 \332\251\330\261\330\257\331\206", 0, QApplication::UnicodeUTF8));
        refresh_pushButton->setText(QApplication::translate("MainWindow", "\330\250\331\207 \330\261\331\210\330\262 \330\261\330\263\330\247\331\206\333\214", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "\330\252\330\254\331\207\333\214\330\262\330\247\330\252 \331\205\330\254\330\247\330\262\330\264\331\206\330\247\330\256\330\252\331\207 \330\264\330\257\331\207", 0, QApplication::UnicodeUTF8));
        label_3->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "\330\252\330\254\331\207\333\214\330\262\330\247\330\252 \330\264\331\206\330\247\330\256\330\252\331\207 \330\264\330\257\331\207", 0, QApplication::UnicodeUTF8));
        remove_pushButton->setText(QApplication::translate("MainWindow", "\330\255\330\260\331\201 \332\251\330\261\330\257\331\206", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = authorizedDevices_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "\331\205\330\264\330\256\330\265\331\207 \330\252\331\210\331\204\333\214\330\257 \332\251\331\206\331\206\330\257\331\207", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = authorizedDevices_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "\331\205\330\264\330\256\330\265\331\207 \331\205\330\255\330\265\331\210\331\204", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = authorizedDevices_tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "\330\263\330\261\333\214\330\247\331\204", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = authorizedDevices_tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "\331\206\330\247\331\205", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\333\214\331\210 \330\247\330\263 \330\250\333\214", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "\330\261\330\263\330\247\331\206\331\207 \331\207\330\247\333\214 \330\260\330\256\333\214\330\261\331\207 \330\263\330\247\330\262\333\214:", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem12 = unblocked_storage_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "\331\206\330\247\331\205", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem13 = unblocked_storage_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "\330\263\330\247\330\262\331\206\330\257\331\207", 0, QApplication::UnicodeUTF8));
        block_storage_pushButton->setText(QApplication::translate("MainWindow", "\331\205\330\263\330\257\331\210\330\257 \331\206\331\205\331\210\330\257\331\206", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem14 = blocked_storage_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "\331\206\330\247\331\205", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem15 = blocked_storage_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "\330\263\330\247\330\262\331\206\330\257\331\207", 0, QApplication::UnicodeUTF8));
        unblock_storage_pushButton->setText(QApplication::translate("MainWindow", "\330\255\330\260\331\201 \332\251\330\261\330\257\331\206", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "\330\257\330\263\330\252\332\257\330\247\331\207\331\207\330\247\333\214 \331\205\330\252\330\265\331\204", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "\330\257\330\263\330\252\332\257\330\247\331\207\331\207\330\247\333\214 \330\272\333\214\330\261\331\205\330\254\330\247\330\262", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\330\261\330\263\330\247\331\206\331\207 \331\207\330\247\333\214 \330\260\330\256\333\214\330\261\331\207 \330\263\330\247\330\262\333\214 \331\210 \330\257\333\214\330\263\332\251 \330\256\331\210\330\247\331\206", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "\332\251\331\206\330\252\330\261\331\204 \330\257\330\263\330\252\330\261\330\263\333\214 \330\250\331\207 \330\257\330\263\330\252\332\257\330\247\331\207\331\207\330\247", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "\330\247\330\271\331\205\330\247\331\204", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "\330\247\331\206\330\265\330\261\330\247\331\201", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "\331\206\330\263\330\256\331\207: \333\261.\333\260.\333\260", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
