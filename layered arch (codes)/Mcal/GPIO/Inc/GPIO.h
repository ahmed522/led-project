/***********************************************************************************
 *                                                                                 *
 *   [MODULE]: GPIO                                                                *
 *                                                                                 *
 *   [FILE NAME]: GPIO.h                                                           *
 *                                                                                 *
 *   [AUTHOR]: Ahmed Abdelaal                                                      *
 *                                                                                 *
 *   [CREATED ON]: 19/09/2022                                                      *
 *                                                                                 *
 *   [DESCRIPTION]: Header file for GPIO driver                                    *
 *                                                                                 *
 ***********************************************************************************/
#ifndef MCAL_GPIO_GPIO_H_
#define MCAL_GPIO_GPIO_H_
/*---------------------------------------------------------------------------------*
 *                                     INCLUDES                                    *
 *---------------------------------------------------------------------------------*/
#include "GPIO_HW.h"
#include "System_HW.h"
#include "GPIO_types.h"
#include "Common_Macros.h"


/*---------------------------------------------------------------------------------*
 *                               GLOBAL CONST MACROS                               *
 *---------------------------------------------------------------------------------*/

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
 * [FUNCTION NAME]: Port_Init
 *
 * [FUNCTION DESCRIPTION]: Function responsible for initialize configurations
 *                         for GPIO pins that have been configured by user.
 * [SYNCHRONIZATION]: sync
 *
 * [REENTARNCY]: Non-Reentrant
 *
 * [Params]: [in]:   [1] const CONFIG* configurations : pointer to array of configurations
 *                                                      of by user.
 *                   [2] uint8 numOfConfiguredPins
 *           [out]:  none
 *
 * [return]: none
 *
 *---------------------------------------------------------------------------------*/
void Port_Init(const CONFIG*,uint8);
/*[2]-------------------------------------------------------------------------------
 *
 * [FUNCTION NAME]: Set_Lock_And_Commit
 *
 * [FUNCTION DESCRIPTION]: Function responsible for setting lock and commit
 *
 * [SYNCHRONIZATION]: sync
 *
 * [REENTARNCY]: Non-Reentrant
 *
 * [Params]: [in]:   [1] uint32 port : the base address of port which contains the bit to be configured.
 *									 [2] uint8 pin : pin to be configured
 *           [out]:  none
 *
 * [return]: none
 *
 *---------------------------------------------------------------------------------*/
void Set_Lock_And_Commit(uint32,uint8);

/*[3]-------------------------------------------------------------------------------
 *
 * [FUNCTION NAME]: Port_Base
 *
 * [FUNCTION DESCRIPTION]: Function responsible for getting the base address of given port
 *
 * [SYNCHRONIZATION]: sync
 *
 * [REENTARNCY]: Non-Reentrant
 *
 * [Params]: [in]:   [1] PORT port : the port to get base address for.
 *
 *           [out]:  none
 *
 * [return]: uint8 base : the base address of port.
 *
 *---------------------------------------------------------------------------------*/
uint32 Port_Base(PORT);
/*[4]-------------------------------------------------------------------------------
 *
 * [FUNCTION NAME]: Set_Clock
 *
 * [FUNCTION DESCRIPTION]: Function responsible for setting clock of given port
 *
 * [SYNCHRONIZATION]: sync
 *
 * [REENTARNCY]: Non-Reentrant
 *
 * [Params]: [in]:   [1] PORT port : the port which contains the bit to be configured.
 *
 *           [out]:  none
 *
 * [return]: none
 *
 *---------------------------------------------------------------------------------*/
void Set_Clock(PORT);
/*[5]-------------------------------------------------------------------------------
 *
 * [FUNCTION NAME]: Set_Signal
 *
 * [FUNCTION DESCRIPTION]: Function responsible for set the type of signal of a pin
 *
 * [SYNCHRONIZATION]: sync
 *
 * [REENTARNCY]: Non-Reentrant
 *
 * [Params]: [in]:   [1] uint32 port : the base address of port which contains
 *                                    the bit to be configured.
 *                   [2] uint8 pin : number of pin to be configured.
 *                   [3] SIGNAL signal : the type of signal of pin to be set
 *                                       can be ANALOG (0) ,or DIGITAL (1).
 *
 *           [out]:  none
 *
 * [return]: none
 *
 *---------------------------------------------------------------------------------*/
void Set_Signal(uint32,uint8,SIGNAL);
/*[6]-------------------------------------------------------------------------------
 *
 * [FUNCTION NAME]: Set_Mode
 *
 * [FUNCTION DESCRIPTION]: Function responsible for set mode for given pin.
 *
 * [SYNCHRONIZATION]: sync
 *
 * [REENTARNCY]: Non-Reentrant
 *
 * [Params]: [in]:   [1] uint32 port : the base address of port which contains
 *                                    the bit to be configured.
 *                   [2] uint8 pin : number of pin to be configured.
 *                   [3] MODE mode : mode to be set (can be either GPIO (0)
 *                                    or Alternate function (1) ).
 *
 *           [out]:  none
 *
 * [return]: none
 *
 *---------------------------------------------------------------------------------*/
void Set_Mode(uint32,uint8,MODE);
/*[7]-------------------------------------------------------------------------------
 *
 * [FUNCTION NAME]: Set_Alternate_Func
 *
 * [FUNCTION DESCRIPTION]: Function responsible for set alternate function for given pin
 *                         if the user configure the pin to perform alternate function.
 *
 * [SYNCHRONIZATION]: sync
 *
 * [REENTARNCY]: Non-Reentrant
 *
 * [Params]: [in]:   [1] uint32 port : the base address of port which contains
 *                                    the bit to be configured.
 *                   [2] uint8 pin : number of pin to be configured.
 *                   [3] uint8 alternateFunc : the encoded number of function (from data sheet)
 *
 *           [out]:  none
 *
 * [return]: none
 *
 *---------------------------------------------------------------------------------*/
void Set_Alternate_Func(uint32,uint8,uint8);
/*[8]-------------------------------------------------------------------------------
 *
 * [FUNCTION NAME]: Set_Direction
 *
 * [FUNCTION DESCRIPTION]: Function responsible for set direction for given pin.
 *
 * [SYNCHRONIZATION]: sync
 *
 * [REENTARNCY]: Non-Reentrant
 *
 * [Params]: [in]:   [1] uint32 port : the base address of port which contains
 *                                    the bit to be configured.
 *                   [2] uint8 pin : number of pin to be configured.
 *                   [3] uint8 direction : direction to be set (can be either INPUT (0)
 *                                         or OUTPUT (1) ).
 *
 *           [out]:  none
 *
 * [return]: none
 *
 *---------------------------------------------------------------------------------*/
void Set_Direction(uint32,uint8,uint8);
/*[9]-------------------------------------------------------------------------------
 *
 * [FUNCTION NAME]: Set_Internal_Attach
 *
 * [FUNCTION DESCRIPTION]: Function responsible for set internal attachment of pin
 *
 * [SYNCHRONIZATION]: sync
 *
 * [REENTARNCY]: Non-Reentrant
 *
 * [Params]: [in]:   [1] uint32 port : the base address of port which contains
 *                                    the bit to be configured.
 *                   [2] uint8 pin : number of pin to be configured.
 *                   [3] INTERNAL_ATTACH internalAttach : the mode of attachment to be set
 *                                                        can be NONE (0) , PULL_UP (1)
 *                                                        , PULL_DOWN (2) or OPEN_DRAIN (3).
 *
 *           [out]:  none
 *
 * [return]: none
 *
 *---------------------------------------------------------------------------------*/
void Set_Internal_Attach(uint32,uint8,INTERNAL_ATTACH);
/*[10]-------------------------------------------------------------------------------
 *
 * [FUNCTION NAME]: Set_Output_Current
 *
 * [FUNCTION DESCRIPTION]: Function responsible for set the output current of a pin
 *
 * [SYNCHRONIZATION]: sync
 *
 * [REENTARNCY]: Non-Reentrant
 *
 * [Params]: [in]:   [1] uint32 port : the base address of port which contains
 *                                    the bit to be configured.
 *                   [2] uint8 pin : number of pin to be configured.
 *                   [3] OUTPUT_CURRENT current : the output current of pin to be set
 *                                                can be CONF_2MA (0) , CONF_4MA (1)
 *                                                or CONF_8MA (2).
 *
 *           [out]:  none
 *
 * [return]: none
 *
 *---------------------------------------------------------------------------------*/
void Set_Output_Current(uint32,uint8,OUTPUT_CURRENT);


#endif /* MCAL_GPIO_GPIO_H_ */
