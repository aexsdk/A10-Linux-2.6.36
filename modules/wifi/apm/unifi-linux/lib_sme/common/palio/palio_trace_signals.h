/* This is an autogenerated file */
/* Tag: noCheckHeader */

/*    CONFIDENTIAL */
/*    Copyright (C) Cambridge Silicon Radio Ltd 2008. All rights reserved. */

#ifndef PALIO_SIGNAL_TRACE_H
#define PALIO_SIGNAL_TRACE_H

#ifdef __cplusplus
extern "C" {
#endif

#include "sme_top_level_fsm/sme_top_level_fsm.h"


#ifdef SME_TRACE_ENABLE

extern void trace_PalCtrlActivateReq(const char* text, const FsmContext* context, const PalCtrlActivateReq_Evt* evt);
extern void trace_PalCtrlActivateCfm(const char* text, const FsmContext* context, const PalCtrlActivateCfm_Evt* evt);
extern void trace_PalCtrlDeactivateReq(const char* text, const FsmContext* context, const PalCtrlDeactivateReq_Evt* evt);
extern void trace_PalCtrlDeactivateCfm(const char* text, const FsmContext* context, const PalCtrlDeactivateCfm_Evt* evt);
extern void trace_PalCtrlEarlyLinkLossInd(const char* text, const FsmContext* context, const PalCtrlEarlyLinkLossInd_Evt* evt);
extern void trace_PalCtrlEventMaskSetReq(const char* text, const FsmContext* context, const PalCtrlEventMaskSetReq_Evt* evt);
extern void trace_PalCtrlEventMaskSetCfm(const char* text, const FsmContext* context, const PalCtrlEventMaskSetCfm_Evt* evt);
extern void trace_PalCtrlFailedContactCounterReadReq(const char* text, const FsmContext* context, const PalCtrlFailedContactCounterReadReq_Evt* evt);
extern void trace_PalCtrlFailedContactCounterReadCfm(const char* text, const FsmContext* context, const PalCtrlFailedContactCounterReadCfm_Evt* evt);
extern void trace_PalCtrlFailedContactCounterResetReq(const char* text, const FsmContext* context, const PalCtrlFailedContactCounterResetReq_Evt* evt);
extern void trace_PalCtrlFailedContactCounterResetCfm(const char* text, const FsmContext* context, const PalCtrlFailedContactCounterResetCfm_Evt* evt);
extern void trace_PalCtrlLinkAliveReq(const char* text, const FsmContext* context, const PalCtrlLinkAliveReq_Evt* evt);
extern void trace_PalCtrlLinkCreateReq(const char* text, const FsmContext* context, const PalCtrlLinkCreateReq_Evt* evt);
extern void trace_PalCtrlLinkCreateCfm(const char* text, const FsmContext* context, const PalCtrlLinkCreateCfm_Evt* evt);
extern void trace_PalCtrlLinkDeleteReq(const char* text, const FsmContext* context, const PalCtrlLinkDeleteReq_Evt* evt);
extern void trace_PalCtrlLinkDeleteCfm(const char* text, const FsmContext* context, const PalCtrlLinkDeleteCfm_Evt* evt);
extern void trace_PalCtrlLinkFlushReq(const char* text, const FsmContext* context, const PalCtrlLinkFlushReq_Evt* evt);
extern void trace_PalCtrlLinkFlushCfm(const char* text, const FsmContext* context, const PalCtrlLinkFlushCfm_Evt* evt);
extern void trace_PalCtrlLinkLostInd(const char* text, const FsmContext* context, const PalCtrlLinkLostInd_Evt* evt);
extern void trace_PalCtrlLinkModifyReq(const char* text, const FsmContext* context, const PalCtrlLinkModifyReq_Evt* evt);
extern void trace_PalCtrlLinkModifyCfm(const char* text, const FsmContext* context, const PalCtrlLinkModifyCfm_Evt* evt);
extern void trace_PalCtrlLinkSupervisionTimeoutDeleteReq(const char* text, const FsmContext* context, const PalCtrlLinkSupervisionTimeoutDeleteReq_Evt* evt);
extern void trace_PalCtrlLinkSupervisionTimeoutDeleteCfm(const char* text, const FsmContext* context, const PalCtrlLinkSupervisionTimeoutDeleteCfm_Evt* evt);
extern void trace_PalCtrlLinkSupervisionTimeoutModifyReq(const char* text, const FsmContext* context, const PalCtrlLinkSupervisionTimeoutModifyReq_Evt* evt);
extern void trace_PalCtrlLinkSupervisionTimeoutModifyCfm(const char* text, const FsmContext* context, const PalCtrlLinkSupervisionTimeoutModifyCfm_Evt* evt);
extern void trace_PalCtrlLinkSupervisionTimeoutSetReq(const char* text, const FsmContext* context, const PalCtrlLinkSupervisionTimeoutSetReq_Evt* evt);
extern void trace_PalCtrlLinkSupervisionTimeoutSetCfm(const char* text, const FsmContext* context, const PalCtrlLinkSupervisionTimeoutSetCfm_Evt* evt);
extern void trace_PalCtrlRegisterReq(const char* text, const FsmContext* context, const PalCtrlRegisterReq_Evt* evt);
extern void trace_PalCtrlRegisterCfm(const char* text, const FsmContext* context, const PalCtrlRegisterCfm_Evt* evt);
extern void trace_PalDmDisableRtsCtsReq(const char* text, const FsmContext* context, const PalDmDisableRtsCtsReq_Evt* evt);
extern void trace_PalDmEnableRtsCtsReq(const char* text, const FsmContext* context, const PalDmEnableRtsCtsReq_Evt* evt);
extern void trace_PalDmMlmeActivityCompleteReq(const char* text, const FsmContext* context, const PalDmMlmeActivityCompleteReq_Evt* evt);
extern void trace_PalDmMlmeActivityCompleteCfm(const char* text, const FsmContext* context, const PalDmMlmeActivityCompleteCfm_Evt* evt);
extern void trace_PalDmMlmeActivityStartReq(const char* text, const FsmContext* context, const PalDmMlmeActivityStartReq_Evt* evt);
extern void trace_PalDmMlmeActivityStartCfm(const char* text, const FsmContext* context, const PalDmMlmeActivityStartCfm_Evt* evt);
extern void trace_PalDmStartReq(const char* text, const FsmContext* context, const PalDmStartReq_Evt* evt);
extern void trace_PalDmStartCfm(const char* text, const FsmContext* context, const PalDmStartCfm_Evt* evt);
extern void trace_PalDmStopReq(const char* text, const FsmContext* context, const PalDmStopReq_Evt* evt);
extern void trace_PalDmStopCfm(const char* text, const FsmContext* context, const PalDmStopCfm_Evt* evt);
extern void trace_PalCoexLinkConnectedReq(const char* text, const FsmContext* context, const PalCoexLinkConnectedReq_Evt* evt);
extern void trace_PalCoexLinkConnectedCfm(const char* text, const FsmContext* context, const PalCoexLinkConnectedCfm_Evt* evt);
extern void trace_PalCoexLinkConnectingReq(const char* text, const FsmContext* context, const PalCoexLinkConnectingReq_Evt* evt);
extern void trace_PalCoexLinkDisconnectedReq(const char* text, const FsmContext* context, const PalCoexLinkDisconnectedReq_Evt* evt);
extern void trace_PalCoexLinkDisconnectedCfm(const char* text, const FsmContext* context, const PalCoexLinkDisconnectedCfm_Evt* evt);
extern void trace_PalCoexLocalActivityReportInd(const char* text, const FsmContext* context, const PalCoexLocalActivityReportInd_Evt* evt);
extern void trace_PalCoexRemoteActivityReportReq(const char* text, const FsmContext* context, const PalCoexRemoteActivityReportReq_Evt* evt);
extern void trace_PalLinkAuthenticateReq(const char* text, const FsmContext* context, const PalLinkAuthenticateReq_Evt* evt);
extern void trace_PalLinkAuthenticateCfm(const char* text, const FsmContext* context, const PalLinkAuthenticateCfm_Evt* evt);
extern void trace_PalLinkConnectReq(const char* text, const FsmContext* context, const PalLinkConnectReq_Evt* evt);
extern void trace_PalLinkConnectCfm(const char* text, const FsmContext* context, const PalLinkConnectCfm_Evt* evt);
extern void trace_PalLinkDisconnectReq(const char* text, const FsmContext* context, const PalLinkDisconnectReq_Evt* evt);
extern void trace_PalLinkDisconnectInd(const char* text, const FsmContext* context, const PalLinkDisconnectInd_Evt* evt);
extern void trace_PalLinkDisconnectCfm(const char* text, const FsmContext* context, const PalLinkDisconnectCfm_Evt* evt);
extern void trace_PalLinkLinkSupervisionRequestReq(const char* text, const FsmContext* context, const PalLinkLinkSupervisionRequestReq_Evt* evt);
extern void trace_PalLinkLinkSupervisionResponseInd(const char* text, const FsmContext* context, const PalLinkLinkSupervisionResponseInd_Evt* evt);
extern void trace_PalLinkStartReq(const char* text, const FsmContext* context, const PalLinkStartReq_Evt* evt);
extern void trace_PalLinkStartCfm(const char* text, const FsmContext* context, const PalLinkStartCfm_Evt* evt);
extern void trace_PalLinkStopReq(const char* text, const FsmContext* context, const PalLinkStopReq_Evt* evt);
extern void trace_PalLinkStopCfm(const char* text, const FsmContext* context, const PalLinkStopCfm_Evt* evt);
extern void trace_PalLinkTimer(const char* text, const FsmContext* context, const PalLinkTimer_Evt* evt);
extern void trace_PalSecurityHandshakeTimer(const char* text, const FsmContext* context, const PalSecurityHandshakeTimer_Evt* evt);


#endif /* SME_TRACE_ENABLE */

#ifdef __cplusplus
}
#endif

#endif /* PALIO_SIGNAL_TRACE_H */
