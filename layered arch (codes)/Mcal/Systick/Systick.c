/***********************************************************************************
 *                                                                                 *
 *   [MODULE]: Systick                                                             *
 *                                                                                 *
 *   [FILE NAME]: Systick.c                                                        *
 *                                                                                 *
 *   [AUTHOR]: Ahmed Abdelaal                                                      *
 *                                                                                 *
 *   [CREATED ON]: 21/09/2022                                                      *
 *                                                                                 *
 *   [DESCRIPTION]: source file for Systick module driver                          *
 *                                                                                 *
 ***********************************************************************************/

/*---------------------------------------------------------------------------------*
 *                                     INCLUDES                                    *
 *---------------------------------------------------------------------------------*/
#include "Systick.h"

void (*ptr)(void);
/*---------------------------------------------------------------------------------*
 *                                FUNCTION DEFINITIONS                             *
 *---------------------------------------------------------------------------------*/
void Systick_Init(const CONFIG_SYSTICK* config)
{

    /* Enable Systick */
    SET_BIT(GET_REG_32_ADDRESS(CORTEX_M4_PERIPHERALS_BASE_ADDRESS,
                               SYSTICK_CONTROL_AND_STATUS_REGISTER_OFFSET),
            SYSTICK_ENABLE_BIT);
    /* Enable Systick Interrupt */
    SET_BIT(GET_REG_32_ADDRESS(CORTEX_M4_PERIPHERALS_BASE_ADDRESS,
                               SYSTICK_CONTROL_AND_STATUS_REGISTER_OFFSET),
            SYSTICK_INTERRUPT_ENABLE_BIT);
    /* Set Systick clock source (-4MHz-) */
    CLEAR_BIT(GET_REG_32_ADDRESS(CORTEX_M4_PERIPHERALS_BASE_ADDRESS,SYSTICK_CONTROL_AND_STATUS_REGISTER_OFFSET),SYSTICK_ENABLE_SYSTEM_CLOCK_SOURCE_BIT);
	
    GET_REG_32_ADDRESS(CORTEX_M4_PERIPHERALS_BASE_ADDRESS,\
                       SYSTICK_RELOAD_VALUE_REGISTER_OFFSET)=(config->ticks_On)-1;
	  ptr=config->Callback_Func;
}

void SysTick_Handler()
{
	/*ptr();*/

}

