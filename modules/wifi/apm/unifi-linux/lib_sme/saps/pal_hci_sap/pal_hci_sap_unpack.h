/***************************************************************************
 *
 * This is an AUTOGENERATED file from genio_unpack_interface_h.pl
 *
 *    CONFIDENTIAL
 *    Copyright (C) Cambridge Silicon Radio Ltd 2007. All rights reserved.
 */

/***************************************************************************
 * Description:
 *       The following functions prototypes are used to unpack primitives,  
 *       commands or in a C structure and send it to a choosen destination  
 *
 * Options used to generate this file:
 * perl genio_unpack_interface_h.pl
 *       -o /home/bfsw/host/releases/unifi_hostsoftware_212/build/unifi-driver-212/host/lib_sme/sme/../saps/pal_hci_sap/pal_hci_sap_unpack.h
 *       -x /home/bfsw/host/releases/unifi_hostsoftware_212/build/unifi-driver-212/host/lib_sme/../common/amp_hci/bt_amp_hci.xml
 *       -d down
 *       -i PAL_HCI
 ***************************************************************************/

#ifdef __cplusplus
extern "C" {
#endif

#ifndef PAL_HCI_UNPACK_GEN_H
#define PAL_HCI_UNPACK_GEN_H

#include "fsm/csr_wifi_fsm.h" 
#include "fsm/fsm_internal.h" 
#include "abstractions/osa.h" 

extern CsrBool unpack_pal_hci_signalUp_received(FsmContext *context, CsrUint8* inbuffer, CsrUint16 size);
extern CsrBool unpack_pal_hci_signalDown_received(FsmContext *context, CsrUint8* inbuffer, CsrUint16 size);


#endif /* PAL_HCI_UNPACK_GEN_H */

#ifdef __cplusplus
}
#endif
