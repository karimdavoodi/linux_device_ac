#include <QProcess>
#include <stdio.h>
#include "dac.h"
int dac::read_devices_stat ()
{
    /*
[USB Attributes]----------------------------
064e:a111 Suyin Corp.
15d9:0a4c Trust International B.V.
[Network Cards]-----------------------------
eth0    00:1e:68:56:8f:df
[HDD and CD/DVD]---------------------------
sda  TOSHIBA MK1652GS 149.1G
sr0  CDDVDW TS-L632H    4.1G
*/
    FILE *f;
    int u, n, h;
    char s[255];
    char name[20],value[100];
    QProcess p;
    QString qs;
    memset(&curr_devs,0,sizeof(struct devs));
    p.start (PROG_NAME, QStringList()<<"view");
    if (!p.waitForStarted())
        return -1;
    p.waitForFinished (-1);
    if(p.exitCode()!=0){
        qs = p.errorString();
        return -1;
    }
    p.waitForReadyRead();
    h = n = u = 0;
    while(!p.atEnd()){
        p.readLine(s,255);
        if (s[0] == '#' || s[0] == '\n')
            continue;
        if (s[0] == '['){
            if (s[1] == 'U')
            {
                u = 1;
                n = h = 0;
            }
            if (s[1] == 'N')
            {
                n = 1;
                u = h = 0;
            }
            if (s[1] == 'H')
            {
                h = 1;
                n = u = 0;
            }
            continue;
        }
        if (n)
        {
            sscanf (s, "%s %s",curr_devs.net[n - 1].name, curr_devs.net[n - 1].mac);
            n++;
            curr_devs.net_num = n;
        }
        if (h)
        {
            sscanf (s, "%s %s", curr_devs.scsi[h - 1].name, curr_devs.scsi[h - 1].model);
            h++;
            curr_devs.scsi_num = h;
        }
        if (u)
        {
            name[0] = '\0';
            value[0] = '\0';
            sscanf (s, "%6s:%s", name,value);
            if(!strcmp(name,"vendor"))
                strcpy(curr_devs.usb[u-1].vendorid,value+2);
            else if(!strcmp(name,"produc"))
                strcpy(curr_devs.usb[u-1].productid,value+2);
            else if(!strcmp(name,"manufa"))
                strcpy(curr_devs.usb[u-1].name,value);
            else if(!strcmp(name,"serial")){
                strcpy(curr_devs.usb[u-1].serial,value);
                u++;
                curr_devs.usb_num = u;
            }
        }

    }
    curr_devs.usb_num--;
    curr_devs.net_num--;
    curr_devs.scsi_num--;
   return 0;
}
int dac::read_config_file ()
{
    FILE *f;
    char s[255];
    int g,u,n,i;
    memset(&conf_devs,0,sizeof(struct devs));
    f = fopen ("/etc/dacconfig.conf", "rt");
    if (!f)
    {
        return -1;
    }
    g = i = n = u = 0;
    while (!feof (f))
    {
        fgets (s, 255, f);
        if (s[0] == '#' || s[0] == '\n')
            continue;
        if (s[0] == '<'){
            switch(s[1]){
            case 'g':
                g=u=n=i=0;
                g=1;
                break;
                g=u=n=i=0;
            case 'u':
                g=u=n=i=0;
                u=1;
                break;
            case 'n':
                g=u=n=i=0;
                n=1;
                break;
            case 'i':
                g=u=n=i=0;
                i=1;
                break;
            case '/':
                break;
            }
            continue;
        }
        if(g)
        {
            if(strstr(s,"enable_dac")){
                if(strchr(s,'0'))
                    enable_dac = 0;
                else
                    enable_dac = 1;
            }
            else if(strstr(s,"block_usb")){
                if(strchr(s,'0'))
                    block_usb = 0;
                else
                    block_usb = 1;
            }
            else if(strstr(s,"block_lp")){
                if(strchr(s,'0'))
                    block_lp = 0;
                else
                    block_lp = 1;
            }
            else if(strstr(s,"block_cdrom_auto")){
                if(strchr(s,'0'))
                    block_cdrom_auto = 0;
                else
                    block_cdrom_auto = 1;
            }
            else if(strstr(s,"block_floppy")){
                if(strchr(s,'0'))
                    block_floppy = 0;
                else
                    block_floppy = 1;
            }
            else if(strstr(s,"block_sound")){
                if(strchr(s,'0'))
                    block_sound = 0;
                else
                    block_sound = 1;
            }
            else if(strstr(s,"block_network")){
                if(strchr(s,'0'))
                    block_network = 0;
                else
                    block_network = 1;
            }
        }
        else if(u)
        {
            sscanf(s,"%s %s %s",conf_devs.usb[u-1].vendorid,conf_devs.usb[u-1].productid,conf_devs.usb[u-1].serial);
            u++;
            conf_devs.usb_num = u;
        }
        else if(n)
        {
            sscanf(s,"%s %s",conf_devs.net[n-1].name,conf_devs.net[n-1].mac);
            n++;
            conf_devs.net_num = n;
        }
        else if(i)
        {
            sscanf(s,"%s",conf_devs.scsi[i-1].name,conf_devs.scsi[i-1].model);
            i++;
            conf_devs.scsi_num = i;
        }
    }
    conf_devs.scsi_num--;
    conf_devs.net_num--;
    conf_devs.usb_num--;
    fclose(f);
    return 0;

}
int dac::write_config ()
{
    FILE *f;
    int i;
    f = fopen ("/etc/dacconfig.conf", "wt");
    if (!f)
    {
        return -1;
    }
    fprintf(f,"#Config file of dac\n");
    fprintf(f,"<general>\n");
    fprintf(f,"#Enable All Config.\n");
    fprintf(f,"enable_dac = %d\n",enable_dac);
    fprintf(f,"#block all USB unless USB device category.\n");
    fprintf(f,"block_usb = %d\n",block_usb);
    fprintf(f,"#block USB Printers.\n");
    fprintf(f,"block_lp = %d\n",block_lp);
    fprintf(f,"#eject of CDROM automaticly.\n");
    fprintf(f,"block_cdrom_auto = %d\n",block_cdrom_auto);
    fprintf(f,"#block FLOPPY Drive.\n");
    fprintf(f,"block_floppy = %d\n",block_floppy);
    fprintf(f,"#block SOUND card.\n");
    fprintf(f,"block_sound = %d\n",block_sound);
    fprintf(f,"#block NETWORK interface.\n");
    fprintf(f,"block_network = %d\n",block_network);
    fprintf(f,"</general>\n");
    fprintf(f,"\n");
    fprintf(f,"<usb>\n");
    fprintf(f,"#<ID Vendor> <ID Product> <Serial Number> <name>\n");
    fprintf(f,"#Parametr 1 and 2 are requre.\n");
    for(i=0; i<conf_devs.usb_num; i++)
    {
        fprintf(f,"%s %s %s\n",conf_devs.usb[i].vendorid, conf_devs.usb[i].productid,conf_devs.usb[i].serial);
    }
    fprintf(f,"</usb>\n");
    fprintf(f,"\n");
    fprintf(f,"<network>\n");
    fprintf(f,"#block network cards manually. No need to config this section if the 'block_eth_auto' is set to 1.\n");
    fprintf(f,"#<Name> <MAC Address>\n");
    for(i=0; i<conf_devs.net_num; i++)
    {
        fprintf(f,"%s %s\n",conf_devs.net[i].name, conf_devs.net[i].mac);
    }
    fprintf(f,"</network>\n");
    fprintf(f,"\n");
    fprintf(f,"<ide_scsi>\n");
    fprintf(f,"#You may imply only devices you've intended to be blocked. Please avoid mentioning sda.\n");
    fprintf(f,"#<name>\n");
    for(i=0; i<conf_devs.scsi_num; i++)
    {
        fprintf(f,"%s\n",conf_devs.scsi[i].name);
    }
    fprintf(f,"</ide_scsi>\n");    return 0;
}
int dac::apply_config ()
{
    return 0;
}



/*
#Config file of dac
<general>
#Enable All Config.
enable_dac = 1
#block all USB unless USB device category.
block_usb = 0
#block USB Printers.
block_lp = 0
#eject of CDROM automaticly.
block_cdrom_auto = 0
#block FLOPPY Drive.
block_floppy = 0
#block SOUND card.
block_sound = 1
#block NETWORK interface.
block_network = 0
</general>

<usb>
#<ID Vendor> <ID Product> <Serial Number> <name>
#Parametr 1 and 2 are requre.
#064e a111
15d9 0a4c
03f0 ad07
</usb>

<network>
#block network cards manually. No need to config this section if the "block_eth_auto" is set to "1".
#<Name> <MAC Address>
eth0 00:1e:68:56:8f:df
</network>

<ide_scsi>
#You may imply only devices you've intended to be blocked. Please avoid mentioning sda.
#<name>
sr0
</ide_scsi>
*/
