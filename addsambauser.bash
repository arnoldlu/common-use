#!/bin/bash -e

if [ $# -ne 3 ];then
    echo "Usage: addsambauser.sh path username password"
    exit 1
fi

echo -e "$2\n$2" |smbpasswd -a $1 -s

sufix=$(date +"%Y%m%d-%H%M%S")
cp /etc/samba/smb.conf /etc/samba/smb.conf_$sufix

echo "##############################" >> /etc/samba/smb.conf
echo "[$1]" >>  /etc/samba/smb.conf
echo "comment = Share folder for $1" >> /etc/samba/smb.conf
echo "path = $3" >>  /etc/samba/smb.conf
echo "public = yes" >>  /etc/samba/smb.conf
echo "writable = yes" >>  /etc/samba/smb.conf
echo "valid users = $1" >> /etc/samba/smb.conf
echo "create mask = 0700" >>  /etc/samba/smb.conf
echo "directory mask = 0700" >>  /etc/samba/smb.conf
echo "force user = $1" >>  /etc/samba/smb.conf
echo "force group = $1" >>  /etc/samba/smb.conf
echo "available  = yes" >> /etc/samba/smb.conf
echo "browseable = yes" >>  /etc/samba/smb.conf

service smbd restart
