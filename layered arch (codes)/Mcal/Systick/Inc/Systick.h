/***********************************************************************************
 *                                                                                 *
 *   [MODULE]: Systick                                                             *
 *                                                                                 *
 *   [FILE NAME]: Systick.h                                                        *
 *                                                                                 *
 *   [AUTHOR]: Ahmed Abdelaal                                                      *
 *                                                                                 *
 *   [CREATED ON]: 21/09/2022                                                      *
 *                                                                                 *
 *   [DESCRIPTION]: Header file for Systick module driver                          *
 *                                                                                 *
 ***********************************************************************************/
#ifndef MCAL_SYSTICK_SYSTICK_H_
#define MCAL_SYSTICK_SYSTICK_H_

/*---------------------------------------------------------------------------------*
 *                                     INCLUDES                                    *
 *---------------------------------------------------------------------------------*/
#include "Systick_HW.h"
#include "Systick_Config.h"
#include "Common_Macros.h"
/*---------------------------------------------------------------------------------*
 *                               GLOBAL CONST MACROS                               *
 *---------------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------------*
 *                                       ENUMS                                     *
 *---------------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------------*
 *                                STRUCTS AND UNIONS                               *
 *---------------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------------*
 *                               FUNCTION PROTOTYPES                               *
 *---------------------------------------------------------------------------------*/
/*[1]-------------------------------------------------------------------------------
 *
 * [FUNCTION NAME]: Systick_Init
 *
 * [FUNCTION DESCRIPTION]: Function responsible for initialize configurations
 *                         for Systick module.
 * [SYNCHRONIZATION]: sync
 *
 * [REENTARNCY]: Non-Reentrant
 *
 * [Params]: [in]:   [1] const CONFIG_SYSTICH* configurations : pointer to CONFIG_SYSTICH
 *                                                which has configurations done by user.
 *           [out]:  none
 *
 * [return]: none
 *
 *---------------------------------------------------------------------------------*/
void Systick_Init(const CONFIG_SYSTICK*);

#endif /* MCAL_SYSTICK_SYSTICK_H_ */
