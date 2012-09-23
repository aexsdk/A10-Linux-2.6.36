/* This is an autogenerated file */
/* Tag: noCheckHeader */
/*    Copyright (C) Cambridge Silicon Radio Ltd 2009. All rights reserved. */
/* */
/*   Refer to LICENSE.txt included with this source for details on the */
/*   license terms. */

/* STANDARD INCLUDES *********************************************************/
#include "ie_utils/ie_utils.h"
#include "ie_access_trace/lib_info_element_trace_fields.h"

/* PUBLIC FUNCTION DEFINITIONS ***********************************************/

#ifdef LIB_INFO_ELEMENT_TRACE_ENABLE

CsrUint8* ie_trace_wmm_parameter(CsrUint8 traceLevel, CsrUint8 *pBuf)
{
    CsrUint32 value;

    ie_CsrUint8(pBuf, value);         CsrLog(traceLevel, (CsrString*)"", (CsrString*)"id:                        0x%.2x", value );
    ie_CsrUint8(pBuf, value);         CsrLog(traceLevel, (CsrString*)"", (CsrString*)"length:                    0x%.2x", value );
    CsrLog(traceLevel, (CsrString*)"", (CsrString*)"    oui 0x%.2x 0x%.2x 0x%.2x", pBuf[0], pBuf[1], pBuf[2]);
    pBuf += 3;
    ie_CsrUint8(pBuf, value);         CsrLog(traceLevel, (CsrString*)"", (CsrString*)"ouiType:                   0x%.2x", value );
    ie_CsrUint8(pBuf, value);         CsrLog(traceLevel, (CsrString*)"", (CsrString*)"ouiSubType:                0x%.2x", value );
    ie_CsrUint8(pBuf, value);         CsrLog(traceLevel, (CsrString*)"", (CsrString*)"version:                   0x%.2x", value );
    pBuf = ie_trace_qos_field(traceLevel, pBuf);
    ie_CsrUint8(pBuf, value);         CsrLog(traceLevel, (CsrString*)"", (CsrString*)"reserved:                  0x%.2x", value );
    pBuf = ie_trace_ac_p_record_format(traceLevel, pBuf);
    pBuf = ie_trace_ac_p_record_format(traceLevel, pBuf);
    pBuf = ie_trace_ac_p_record_format(traceLevel, pBuf);
    pBuf = ie_trace_ac_p_record_format(traceLevel, pBuf);

    return pBuf;
}


#endif /* LIB_INFO_ELEMENT_TRACE_ENABLE */




