/***********************************************************************************
 *                                                                                 *
 *   [MODULE]: System                                                              *
 *                                                                                 *
 *   [FILE NAME]: System_HW.h                                                      *
 *                                                                                 *
 *   [AUTHOR]: Ahmed Abdelaal                                                      *
 *                                                                                 *
 *   [CREATED ON]: 20/09/2022                                                      *
 *                                                                                 *
 *   [DESCRIPTION]: Header file define system hardware regiters                    *
 *                                                                                 *
 ***********************************************************************************/
#ifndef MCAL_RAL_SYSTEM_HW_H_
#define MCAL_RAL_SYSTEM_HW_H_

/*---------------------------------------------------------------------------------*
 *                                     INCLUDES                                    *
 *---------------------------------------------------------------------------------*/
#include "std_types.h"

/*---------------------------------------------------------------------------------*
 *                               GLOBAL CONST MACROS                               *
 *---------------------------------------------------------------------------------*/
#define SYSTEM_CONTROL_BASE_ADDRESS     0x400FE000

/* GPIO clock control registers */
#define RCGCGPIO_OFFSET                 0x608


#endif /* MCAL_RAL_SYSTEM_HW_H_ */
