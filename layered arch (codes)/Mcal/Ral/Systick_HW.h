/***********************************************************************************
 *                                                                                 *
 *   [MODULE]: Systick                                                             *
 *                                                                                 *
 *   [FILE NAME]: Systick_HW.h                                                     *
 *                                                                                 *
 *   [AUTHOR]: Ahmed Abdelaal                                                      *
 *                                                                                 *
 *   [CREATED ON]: 21/09/2022                                                      *
 *                                                                                 *
 *   [DESCRIPTION]: Header file define Systick hardware registers                  *
 *                                                                                 *
 ***********************************************************************************/
#ifndef MCAL_RAL_SYSTICK_HW_H_
#define MCAL_RAL_SYSTICK_HW_H_
/*---------------------------------------------------------------------------------*
 *                                     INCLUDES                                    *
 *---------------------------------------------------------------------------------*/
#include "common.h"
/*---------------------------------------------------------------------------------*
 *                               GLOBAL CONST MACROS                               *
 *---------------------------------------------------------------------------------*/
#define SYSTICK_CONTROL_AND_STATUS_REGISTER_OFFSET               0x010
#define SYSTICK_RELOAD_VALUE_REGISTER_OFFSET                     0x014
#define SYSTICK_CURRENT_VALUE_REGISTER_OFFSET                    0x018
#define SYSTICK_ENABLE_BIT                                       0
#define SYSTICK_INTERRUPT_ENABLE_BIT                             1
#define SYSTICK_ENABLE_SYSTEM_CLOCK_SOURCE_BIT                   2


#endif /* MCAL_RAL_SYSTICK_HW_H_ */
