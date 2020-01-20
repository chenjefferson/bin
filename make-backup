#!/bin/bash
# shell script to backup the Table directory

# return value
# 0 on success
# 1 if backup dir is file

BACKUP_DIR=~/Backups

if [[ ! -e ${BACKUP_DIR} ]]; then
    echo -n "backup dir DNE, creating..."
    mkdir ${BACKUP_DIR}
fi

if [[ -f ${BACKUP_DIR} ]]; then
    echo -n "backup dir is file. exiting"
    exit 1
fi

filename=`date +%Y_%m_%d_%H-Table-Backup.tar.bz2`

tar cjf ${BACKUP_DIR}/${filename} ~/Table/

exit 0
