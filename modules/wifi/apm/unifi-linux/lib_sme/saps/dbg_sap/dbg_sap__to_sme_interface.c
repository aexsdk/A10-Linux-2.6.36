/* This is an autogenerated file */
/* Tag: noCheckHeader */
/*    Copyright (C) Cambridge Silicon Radio Ltd 2009. All rights reserved. */
/* */
/*   Refer to LICENSE.txt included with this source for details on the */
/*   license terms. */

#include "fsm/fsm_internal.h"
#include "sme_top_level_fsm/sme_top_level_fsm.h"

/*lint -e725 */

#define INIT_EVENT_HEADER(event,evtid) \
    event->common.id = evtid; \
    event->common.destination = 0; \
    event->common.sender_ = FSM_ENV


void unifi_dbg_cmd_req(FsmContext* context,
                       char* command)
{
    UnifiDbgCmdReq_Evt* evt = (UnifiDbgCmdReq_Evt*)CsrPmalloc(sizeof(UnifiDbgCmdReq_Evt));

    INIT_EVENT_HEADER(evt, UNIFI_DBG_CMD_REQ_ID);

    evt->command = (char*)CsrPmalloc(CsrStrLen(command) + 1);
    CsrStrCpy(evt->command, command);

    fsm_send_event_external(context, (FsmEvent*)evt, getSmeContext(context)->dbgInstance, evt->common.id);
}


