#ifndef DAC_H
#define DAC_H
#include <string.h>
#define  USB_MAX 20
#define  NET_MAX 10
#define  SCSI_MAX 10
#define  PROG_NAME  "/etc/init.d/dac"
struct usb_dev {
    char vendorid[20];
    char productid[20];
    char serial[20];
    char name[100];
};
struct net_dev {
    char name[20];
    char mac[20];
};
struct scsi_dev {
    char name[20];
    char model[100];
    char size[20];
};
struct devs {
    struct usb_dev usb[USB_MAX];
    struct net_dev net[NET_MAX];
    struct scsi_dev scsi[SCSI_MAX];
    int usb_num;
    int net_num;
    int scsi_num;
};
class dac {
public:
    int enable_dac;
    int block_usb;
    int block_lp;
    int block_cdrom_auto;
    int block_floppy;
    int block_sound;
    int block_network;
    struct devs curr_devs;
    struct devs conf_devs;

    void init(){
        enable_dac = 0;
        block_usb = 0;
        block_lp = 0;
        block_cdrom_auto = 0;
        block_floppy = 0;
        block_sound = 0;
        block_network = 0;
        memset(&curr_devs,0,sizeof(struct devs));
        memset(&conf_devs,0,sizeof(struct devs));
    }

    int read_devices_stat();
    int read_config_file();
    int write_config();
    int apply_config();
};
#endif // DAC_H
