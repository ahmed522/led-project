/***********************************************************************************
 *                                                                                 *
 *   [MODULE]: Common between all modules                                          *
 *                                                                                 *
 *   [FILE NAME]: Common_Macros.h                                                  *
 *                                                                                 *
 *   [AUTHOR]: Ahmed Abdelaal                                                      *
 *                                                                                 *
 *   [CREATED ON]: 19/09/2022                                                      *
 *                                                                                 *
 *   [DESCRIPTION]: Header file define common macros between all modules           *
 *                                                                                 *
 ***********************************************************************************/

#ifndef COMMON_COMMON_MACROS_H_
#define COMMON_COMMON_MACROS_H_

/*---------------------------------------------------------------------------------*
 *                                     INCLUDES                                    *
 *---------------------------------------------------------------------------------*/
#include "std_types.h"

/*---------------------------------------------------------------------------------*
 *                               GLOBAL CONST MACROS                               *
 *---------------------------------------------------------------------------------*/
#define GET_REG_32_ADDRESS(base,offset) *(volatile uint32*)((base)+(offset))
#define SET_BIT(REG,BIT) (REG|=(1<<BIT))
#define CLEAR_BIT(REG,BIT) (REG&=(~(1<<BIT)))
#define TOGGLE_BIT(REG,BIT) (REG^=(1<<BIT))
#endif /* COMMON_COMMON_MACROS_H_ */
