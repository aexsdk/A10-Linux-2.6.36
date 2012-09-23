/* This is an autogenerated file */
/* Tag: noCheckHeader */
/*    Copyright (C) Cambridge Silicon Radio Ltd 2009. All rights reserved. */
/* */
/*   Refer to LICENSE.txt included with this source for details on the */
/*   license terms. */

#ifndef IE_COUNTRY_H
#define IE_COUNTRY_H

#ifdef __cplusplus
extern "C" {
#endif

/* STANDARD INCLUDES *********************************************************/
#include "ie_utils/ie_utils.h"

/* COMPLEX TYPES DEFINITIONS *************************************************/
typedef struct ie_country
{
    CsrUint8  id;
    CsrUint8  length;
    CsrUint8  countryString[3];
    struct country_channelSpec {
        CsrUint8  firstChannel;
        CsrUint8  numberOfChannel;
        CsrUint8  maxTransmitPower;
    }* channelSpec; 
    
}ie_country;


/* PUBLIC FUNCTION PROTOTYPES ************************************************/
#define ie_get_country(elements,length, country) ie_find(IE_ID_COUNTRY, elements, length, (CsrUint8**)&country);


/* SUBSIDARY ACCESSORS *******************************************************/
#define IE_COUNTRY__ID_SIZE                                  1
#define IE_COUNTRY__LENGTH_SIZE                              1
#define IE_COUNTRY__COUNTRY_STRING_SIZE                      3
#define IE_COUNTRY__TOTAL_SIZE                               5




#ifdef __cplusplus
}
#endif

#endif /* IE_COUNTRY_H */