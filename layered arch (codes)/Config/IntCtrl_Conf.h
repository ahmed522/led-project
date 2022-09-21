/***********************************************************************************
 * 																				   *
 * 	 [MODULE]: Interrupt													       *
 * 																				   *
 * 	 [FILE NAME]: IntCtrl_Conf.h			    							       *
 * 																				   *
 * 	 [AUTHOR]: Ahmed Abdelaal													   *
 * 																				   *
 * 	 [CREATED ON]: 12/09/2022													   *
 * 																				   *
 *   [DESCRIPTION]: Header file for interrupt configurations				       *
 * 																				   *
 ***********************************************************************************/
#ifndef INT_CTRL_CONF_H_
#define INT_CTRL_CONF_H_

/*----------------------------------INCLUDES---------------------------------------*/
#include "IntTypes.h"

/*---------------------------------------------------------------------------------*
 *                               GLOBAL CONST MACROS                               *
 *---------------------------------------------------------------------------------*/

/*
    Define the priority combination
    xxx         :          0x4
    xxy         :          0x5
    xyy         :          0x6
    yyy         :          0x7
    in bit field PRIGROUP in APINT register (bits:8,9,10)
*/
#define PRIORITY_COMBINATION (uint32)0x00000500

/*
    Define number of chosen IRQs
*/
/*   #define IRQs_SIZE 3   */

/*
    Define number of chosen System interrupts and faults
*/
#define System_Int_and_Faults_SIZE 1

#endif


