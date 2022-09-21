/***********************************************************************************
 *                                                                                 *
 *   [MODULE]: Systick                                                             *
 *                                                                                 *
 *   [FILE NAME]: Systick_Config.h                                                 *
 *                                                                                 *
 *   [AUTHOR]: Ahmed Abdelaal                                                      *
 *                                                                                 *
 *   [CREATED ON]: 21/09/2022                                                      *
 *                                                                                 *
 *   [DESCRIPTION]: Header file define Systick user configurations                 *
 *                                                                                 *
 ***********************************************************************************/
#ifndef CONFIG_SYSTICK_CONFIG_H_
#define CONFIG_SYSTICK_CONFIG_H_

/*---------------------------------------------------------------------------------*
 *                                     INCLUDES                                    *
 *---------------------------------------------------------------------------------*/
#include "Systick_types.h"
#include "Systick_HW.h"
/*---------------------------------------------------------------------------------*
 *                               GLOBAL CONST MACROS                               *
 *---------------------------------------------------------------------------------*/
#define MAXIMUM_NUMBER_OF_TICKS         0x00FFFFFF
#define CLOCk                           4000000
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
 * [FUNCTION NAME]: Configure_Systick
 *
 * [FUNCTION DESCRIPTION]: Function responsible for set configurations of Systick.
 *
 * [SYNCHRONIZATION]: sync
 *
 * [REENTARNCY]: Non-Reentrant
 *
 * [Params]: [in]:   [1] float32 period_On : led on period in seconds.
 *                   [2] float32 period_Off : led off period in seconds.
 *                   [3] void (*callback_Func)(void):pointer to callback function.
 *           [out]:  none
 *
 * [return]: none
 *
 *---------------------------------------------------------------------------------*/
void Configure_Systick(float32,float32,void (*callback_Func)(void));

#endif /* CONFIG_SYSTICK_CONFIG_H_ */
