/***********************************************************************************
 *                                                                                 *
 *   [MODULE]: GPIO                                                                *
 *                                                                                 *
 *   [FILE NAME]: DIO.c                                                            *
 *                                                                                 *
 *   [AUTHOR]: Ahmed Abdelaal                                                      *
 *                                                                                 *
 *   [CREATED ON]: 20/09/2022                                                      *
 *                                                                                 *
 *   [DESCRIPTION]: Source file for DIO driver                                     *
 *                                                                                 *
 ***********************************************************************************/

/*---------------------------------------------------------------------------------*
 *                                     INCLUDES                                    *
 *---------------------------------------------------------------------------------*/
#include "DIO.h"

/*---------------------------------------------------------------------------------*
 *                                FUNCTION DEFINITIONS                             *
 *---------------------------------------------------------------------------------*/
uint8 Read_Channel(uint32 portBase,uint8 pin)
{
    uint8 value;
    uint16 mask=(uint16)((1<<2)<<pin);  /* get the value of address lines 2 --> 9 (mask) */
    value=(uint8)GET_REG_32_ADDRESS(portBase,(GPIO_DATA_OFFSET+mask));
    return value;
}

void Write_Channel(uint32 portBase,uint8 pin,uint8 value)
{
    uint16 mask=(uint16)(1<<2<<pin);  /* get the value of address lines 2 --> 9 (mask) */
    GET_REG_32_ADDRESS(portBase,(GPIO_DATA_OFFSET+mask))=value;
}

void Toggle_Channel(uint32 portBase,uint8 pin)
{
    uint16 mask=(uint16)(1<<2<<pin);  /* get the value of address lines 2 --> 9 (mask) */
    uint8 value;
    value=(uint8)GET_REG_32_ADDRESS(portBase,(GPIO_DATA_OFFSET+mask));
    if(value == HIGH)
    {
        GET_REG_32_ADDRESS(portBase,(GPIO_DATA_OFFSET+mask))=LOW;
    }
    else
    {
        GET_REG_32_ADDRESS(portBase,(GPIO_DATA_OFFSET+mask))=HIGH;
    }
}

uint8 Read_Port(uint32 portBase)
{
    uint8 value;
    value=(uint8)GET_REG_32_ADDRESS(portBase,(GPIO_DATA_OFFSET+PORT_MASK));
    return value;
}

void Write_Port(uint32 portBase,uint8 value)
{
    GET_REG_32_ADDRESS(portBase,(GPIO_DATA_OFFSET+PORT_MASK))=value;
}
