/***********************************************************************************
 * 																				   *
 * 	 [MODULE]: Interrupt													       *
 * 																				   *
 * 	 [FILE NAME]: IntCtrl.h			    									       *
 * 																				   *
 * 	 [AUTHOR]: Ahmed Abdelaal													   *
 * 																				   *
 * 	 [CREATED ON]: 12/09/2022													   *
 * 																				   *
 *   [DESCRIPTION]: Header file for interrupt control module				       *
 * 																				   *
 ***********************************************************************************/

/*----------------------------------INCLUDES---------------------------------------*/
#include "IntCtrl_Conf.h"
#include "SCB_HW.h"
#include "NVIC_HW.h"
/***********************************************************************************
 * 																				   *
 * 	                			FUNCTION PROTOTYPES								   *
 * 																				   *
 ***********************************************************************************/

/*[1]-------------------------------------------------------------------------------
 *
 * [FUNCTION NAME]: Interrupt_init
 *
 * [FUNCTION DESCRIPTION]: Function responsible for initialize configurations
 *                         for NVIC and SCB modules.
 * [SYNCHRONIZATION]: sync
 *
 * [REENTARNCY]: Non reentarnt
 *
 * [Params]: [in]:   none
 *           [out]:  none
 *
 * [return]: none
 *
 *---------------------------------------------------------------------------------*/
void Interrupt_init(void);

/*[2]-------------------------------------------------------------------------------
 *
 * [FUNCTION NAME]: Set_Priority
 *
 * [FUNCTION DESCRIPTION]: Function responsible for seting given priority
 *                         for chosen IRQs.
 * [SYNCHRONIZATION]: sync
 *
 * [REENTARNCY]: Non reentarnt
 *
 * [Params]: [in]:   [1] PRIx_Tag PRIn Register for given interrupt
 *                   [2] uint8 index of interrupt in given PRIn register can be 0 ,1 ,2 or 3
 *                   [3] uint8 priority : the configured priority by user for given interrupt
 *           [out]:  none
 *
 * [return]: none
 *
 *---------------------------------------------------------------------------------*/
void Set_Priority(PRIx_Tag, uint8, uint8);
