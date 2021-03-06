/*
 * Copyright (c) 2011-2012 Qualcomm Atheros, Inc. 
 * All Rights Reserved. 
 * Qualcomm Atheros Confidential and Proprietary. 
 *
 * Airgo Networks, Inc proprietary. All rights reserved.
 * This file limPropExtsUtils.h contains the definitions
 * used by all LIM modules to support proprietary features.
 * Author:        Chandra Modumudi
 * Date:          12/11/02
 * History:-
 * Date           Modified by    Modification Information
 * --------------------------------------------------------------------
 * 
 */

#ifndef __LIM_PROP_EXTS_UTILS_H
#define __LIM_PROP_EXTS_UTILS_H


// Function templates
void limQuietBss(tpAniSirGlobal, tANI_U32);
void limCleanupMeasData(tpAniSirGlobal);
void limDeleteMeasTimers(tpAniSirGlobal);
void limStopMeasTimers(tpAniSirGlobal pMac);
void limCleanupMeasResources(tpAniSirGlobal);
void limRestorePreLearnState(tpAniSirGlobal);
void limCollectMeasurementData(tpAniSirGlobal,
                               tANI_U32 *, tpSchBeaconStruct);
void limCollectRSSI(tpAniSirGlobal);
void limDeleteCurrentBssWdsNode(tpAniSirGlobal);
tANI_U32  limComputeAvg(tpAniSirGlobal, tANI_U32, tANI_U32);

#if (WNI_POLARIS_FW_PACKAGE == ADVANCED) && defined(ANI_PRODUCT_TYPE_AP)
// Timer Handlers
void limMeasurementTimerHandler(VOID*, tANI_U32);
#endif

/// Function to extract AP's HCF capability from IE fields
void limExtractApCapability(tpAniSirGlobal, tANI_U8 *, tANI_U16, tANI_U8 *, tANI_U16 *, tANI_U8 *, tPowerdBm*, tpPESession);

#if (WNI_POLARIS_FW_PACKAGE == ADVANCED) && defined(ANI_PRODUCT_TYPE_AP)
/// Function to extract current Learn channel
tANI_U8 limGetCurrentLearnChannel(tpAniSirGlobal);
// Determine if a newly discovered BSS is TITAN-compatible
void handleNonTitanBss( tpAniSirGlobal, tSirNeighborBssWdsInfo );
#endif
tStaRateMode limGetStaPeerType( tpAniSirGlobal, tpDphHashNode ,tpPESession);
#ifdef WLAN_FEATURE_11AC
ePhyChanBondState  limGetHTCBState(ePhyChanBondState aniCBMode) ;
#endif


#endif /* __LIM_PROP_EXTS_UTILS_H */

