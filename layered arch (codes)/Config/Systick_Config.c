/***********************************************************************************
 *                                                                                 *
 *   [MODULE]: Systick                                                             *
 *                                                                                 *
 *   [FILE NAME]: Systick_Config.c                                                 *
 *                                                                                 *
 *   [AUTHOR]: Ahmed Abdelaal                                                      *
 *                                                                                 *
 *   [CREATED ON]: 21/09/2022                                                      *
 *                                                                                 *
 *   [DESCRIPTION]: source file define Systick user configurations                 *
 *                                                                                 *
 ***********************************************************************************/

/*---------------------------------------------------------------------------------*
 *                                     INCLUDES                                    *
 *---------------------------------------------------------------------------------*/
#include "Systick_Config.h"

/*---------------------------------------------------------------------------------*
 *                                FUNCTION DEFINITIONS                             *
 *---------------------------------------------------------------------------------*/

CONFIG_SYSTICK configurations;
CONFIG_SYSTICK* configurations_ptr=&configurations;

void Configure_Systick(float32 period_On,float32 period_Off,void (*callback_Func)(void))
{
    configurations.duration_On=period_On;
    configurations.duration_Off=period_Off;
    configurations.ticks_On=(uint32)period_On*CLOCk;
    configurations.ticks_Off=(uint32)period_Off*CLOCk;
    configurations.Callback_Func=callback_Func;
}




