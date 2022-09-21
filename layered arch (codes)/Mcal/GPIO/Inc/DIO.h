/***********************************************************************************
 *                                                                                 *
 *   [MODULE]: GPIO                                                                *
 *                                                                                 *
 *   [FILE NAME]: DIO.h                                                            *
 *                                                                                 *
 *   [AUTHOR]: Ahmed Abdelaal                                                      *
 *                                                                                 *
 *   [CREATED ON]: 20/09/2022                                                      *
 *                                                                                 *
 *   [DESCRIPTION]: Header file for DIO driver                                     *
 *                                                                                 *
 ***********************************************************************************/
#ifndef MCAL_GPIO_INC_DIO_H_
#define MCAL_GPIO_INC_DIO_H_

/*---------------------------------------------------------------------------------*
 *                                     INCLUDES                                    *
 *---------------------------------------------------------------------------------*/
#include "GPIO_HW.h"
#include "Common_Macros.h"

/*---------------------------------------------------------------------------------*
 *                               GLOBAL CONST MACROS                               *
 *---------------------------------------------------------------------------------*/
#define PORT_MASK       (uint16)0x03FC

/*---------------------------------------------------------------------------------*
 *                               FUNCTION PROTOTYPES                               *
 *---------------------------------------------------------------------------------*/
/*[1]-------------------------------------------------------------------------------
 *
 * [FUNCTION NAME]: Read_Channel
 *
 * [FUNCTION DESCRIPTION]: Function responsible for reading the data on given pin.
 *
 * [SYNCHRONIZATION]: sync
 *
 * [REENTARNCY]: Reentrant
 *
 * [Params]: [in]:   [1] uint32 portBase : the base address of port includes the channel to be read.
 *                   [2] uint8 pin : the pin to be read.
 *
 *           [out]:  none
 *
 * [return]: uint8 value : the value on the channel can be either HIGH (1)
 *                         ,or LOW (0).
 *
 *---------------------------------------------------------------------------------*/
uint8 Read_Channel(uint32,uint8);
/*[2]-------------------------------------------------------------------------------
 *
 * [FUNCTION NAME]: Write_Channel
 *
 * [FUNCTION DESCRIPTION]: Function responsible for write a value on given pin.
 *
 * [SYNCHRONIZATION]: sync
 *
 * [REENTARNCY]: Reentrant
 *
 * [Params]: [in]:   [1] uint32 portBase : the base address of port includes the channel to write on.
 *                   [2] uint8 pin : the pin to write on.
 *                   [3] uint8 value : the value to be written on given channel
 *                                     (HIGH or LOW).
 *
 *           [out]:  none
 *
 * [return]: none
 *
 *---------------------------------------------------------------------------------*/
void Write_Channel(uint32,uint8,uint8);
/*[3]-------------------------------------------------------------------------------
 *
 * [FUNCTION NAME]: Toggle_channel
 *
 * [FUNCTION DESCRIPTION]: Function responsible for toggle the value on given pin.
 *
 * [SYNCHRONIZATION]: sync
 *
 * [REENTARNCY]: Reentrant
 *
 * [Params]: [in]:   [1] uint32 portBase : the base address of port includes the channel to toggle.
 *                   [2] uint8 pin : the pin to toggle.
 *
 *           [out]:  none
 *
 * [return]: none
 *
 *---------------------------------------------------------------------------------*/
void Toggle_Channel(uint32,uint8);
/*[4]-------------------------------------------------------------------------------
 *
 * [FUNCTION NAME]: Read_Port
 *
 * [FUNCTION DESCRIPTION]: Function responsible for read data on given Port.
 *
 * [SYNCHRONIZATION]: sync
 *
 * [REENTARNCY]: Reentrant
 *
 * [Params]: [in]:   [1] uint32 portBase : the base address of port to be read.
 *
 *           [out]:  none
 *
 * [return]: uint8 value : the value on the port to be read.
 *
 *---------------------------------------------------------------------------------*/
uint8 Read_Port(uint32);
/*[5]-------------------------------------------------------------------------------
 *
 * [FUNCTION NAME]: Write_Port
 *
 * [FUNCTION DESCRIPTION]: Function responsible for write a value on given port.
 *
 * [SYNCHRONIZATION]: sync
 *
 * [REENTARNCY]: Reentrant
 *
 * [Params]: [in]:   [1] uint32 portBase : the base address of port to write on.
 *                   [2] uint8 value : the value to be written on given port
 *                                     (0-->255).
 *
 *           [out]:  none
 *
 * [return]: none
 *
 *---------------------------------------------------------------------------------*/
void Write_Port(uint32,uint8);
#endif /* MCAL_GPIO_INC_DIO_H_ */
