/****************************************************************************
Copyright Cambridge Silicon Radio Limited 2015
Part of ADK 4.0

FILE NAME
    upgrade_psstore_priv.h
    
DESCRIPTION
    Definition of FSTAB datatype.
*/

#ifndef UPGRADE_PSSTORE_PRIV_H_
#define UPGRADE_PSSTORE_PRIV_H_

typedef struct {
    uint16 length;
    uint16 ram_copy[PSKEY_MAX_STORAGE_LENGTH];
} FSTAB_COPY;

#endif /* UPGRADE_PSSTORE_PRIV_H_ */