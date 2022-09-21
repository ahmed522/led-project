/***********************************************************************************
 *                                                                                 *
 *   [MODULE]: Systick                                                             *
 *                                                                                 *
 *   [FILE NAME]: Systick_types.h                                                  *
 *                                                                                 *
 *   [AUTHOR]: Ahmed Abdelaal                                                      *
 *                                                                                 *
 *   [CREATED ON]: 21/09/2022                                                      *
 *                                                                                 *
 *   [DESCRIPTION]: Header file define Systick types                                *
 *                                                                                 *
 ***********************************************************************************/
#ifndef MCAL_SYSTICK_SYSTICK_TYPES_H_
#define MCAL_SYSTICK_SYSTICK_TYPES_H_
/*---------------------------------------------------------------------------------*
 *                                     INCLUDES                                    *
 *---------------------------------------------------------------------------------*/
#include "std_types.h"

/*---------------------------------------------------------------------------------*
 *                               GLOBAL CONST MACROS                               *
 *---------------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------------*
 *                                       ENUMS                                     *
 *---------------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------------*
 *                                STRUCTS AND UNIONS                               *
 *---------------------------------------------------------------------------------*/
/* Systick Configuration */
typedef struct CONFIG_SYSTICK
{
    uint32 ticks_On;
    uint32 ticks_Off;
    float32 duration_On;
    float32 duration_Off;
    void (*Callback_Func)(void);
} CONFIG_SYSTICK;

/*---------------------------------------------------------------------------------*
 *                               FUNCTION PROTOTYPES                               *
 *---------------------------------------------------------------------------------*/

#endif /* MCAL_SYSTICK_SYSTICK_TYPES_H_ */