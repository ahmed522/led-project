/***********************************************************************************
 * 																				   *
 * 	 [MODULE]: Interrupt													       *
 * 																				   *
 * 	 [FILE NAME]: IntCtrl_Conf.c			    							       *
 * 																				   *
 * 	 [AUTHOR]: Ahmed Abdelaal													   *
 * 																				   *
 * 	 [CREATED ON]: 12/09/2022													   *
 * 																				   *
 *   [DESCRIPTION]: source file for interrupt configurations				       *
 * 																				   *
 ***********************************************************************************/

#include "IntCtrl_Conf.h"

/*---------------------------------------------------------------------------------*
 *                               GLOBAL CONST VARIABLES                            *
 *---------------------------------------------------------------------------------*/
#ifdef IRQs_SIZE
const INTERRUPT_TYPE_IRQ g_Chosen_IRQs[IRQs_SIZE] = {};
const uint8 g_IRQs_Priority [IRQs_SIZE] = {2, 1, 0};
#endif

#ifdef System_Int_and_Faults_SIZE
const INTERRUPT_TYPE_SYS g_Chosen_System_Int_and_Faults[System_Int_and_Faults_SIZE] = {SYS_TICK};
const uint8 g_System_Int_and_Faults_Priority [System_Int_and_Faults_SIZE] = {1};
#endif


