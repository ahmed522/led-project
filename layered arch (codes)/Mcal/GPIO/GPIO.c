/***********************************************************************************
 *                                                                                 *
 *   [MODULE]: GPIO                                                                *
 *                                                                                 *
 *   [FILE NAME]: GPIO.c                                                           *
 *                                                                                 *
 *   [AUTHOR]: Ahmed Abdelaal                                                      *
 *                                                                                 *
 *   [CREATED ON]: 19/09/2022                                                      *
 *                                                                                 *
 *   [DESCRIPTION]: Source file for GPIO driver                                    *
 *                                                                                 *
 ***********************************************************************************/

/*---------------------------------------------------------------------------------*
 *                                     INCLUDES                                    *
 *---------------------------------------------------------------------------------*/
#include "GPIO.h"

/*---------------------------------------------------------------------------------*
 *                                FUNCTION DEFINITIONS                             *
 *---------------------------------------------------------------------------------*/
void Port_Init(const CONFIG* configurations,uint8 numOfConfiguredPins)
{
    uint32 port_Base;
	  int i;
    for(i=0;i<numOfConfiguredPins;i++)
    { 
			 /* Generate clock for given port */
       Set_Clock((configurations+i)->PORT);
			 /* Get port base for given pin */
       port_Base=Port_Base((configurations+i)->PORT); 
			 /* Set lock and Commit bits for given port */
			 Set_Lock_And_Commit(port_Base,(configurations+i)->PIN_NUMBER);
       /* Set signal for given pin*/
       Set_Signal(port_Base,(configurations+i)->PIN_NUMBER,(configurations+i)->PIN_SIGNAL);
       /* Set Mode for given pin */
       Set_Mode(port_Base,(configurations+i)->PIN_NUMBER,(configurations+i)->PIN_MODE);
       /* Set alternate function (if given) for given pin */
       Set_Alternate_Func(port_Base,(configurations+i)->PIN_NUMBER,(configurations+i)->PIN_FUNC);
       /* Set direction for given pin */
       Set_Direction(port_Base,(configurations+i)->PIN_NUMBER,(configurations+i)->PIN_DIR);
       /* Set internal attachment for given pin */
       Set_Internal_Attach(port_Base,(configurations+i)->PIN_NUMBER,(configurations+i)->PIN_ATTACH);
       /* Set output current for given pin */
       Set_Output_Current(port_Base,(configurations+i)->PIN_NUMBER,(configurations+i)->PIN_CURRENT);

    }

}
uint32 Port_Base(PORT port)
{
    uint32 base=NULL;
    switch(port)
           {
           case PORT_A:
               base=BASE_PORT_A;
               break;
           case PORT_B:
               base=BASE_PORT_B;
               break;
           case PORT_C:
               base=BASE_PORT_C;
               break;
           case PORT_D:
               base=BASE_PORT_D;
               break;
           case PORT_E:
               base=BASE_PORT_E;
               break;
           case PORT_F:
               base=BASE_PORT_F;
               break;
           }
    return base;
}

void Set_Lock_And_Commit(uint32 port,uint8 pin)
{
	  GET_REG_32_ADDRESS(port,GPIO_LOCK_OFFSET)= 0x4C4F434B;
	  SET_BIT(GET_REG_32_ADDRESS(port,GPIO_COMMIT_OFFSET),pin);	
}

void Set_Clock (PORT port)
{
    SET_BIT(GET_REG_32_ADDRESS(SYSTEM_CONTROL_BASE_ADDRESS,RCGCGPIO_OFFSET),port);
}
void Set_Signal (uint32 port,uint8 pin,uint8 signal)
{
    if(signal==DIGITAL)
    {
        SET_BIT(GET_REG_32_ADDRESS(port,GPIO_DIGITAL_ENABLE_OFFSET),
                pin);
        CLEAR_BIT(GET_REG_32_ADDRESS(port,GPIO_ANALOG_MODE_SELECTOR_OFFSET),
                  pin);
    }
    else
    {
        SET_BIT(GET_REG_32_ADDRESS(port,GPIO_ANALOG_MODE_SELECTOR_OFFSET),
                pin);
        CLEAR_BIT(GET_REG_32_ADDRESS(port,GPIO_DIGITAL_ENABLE_OFFSET),
                  pin);
    }
}

void Set_Mode(uint32 port,uint8 pin,uint8 mode)
{
    if(mode==GPIO)
    {
        CLEAR_BIT(GET_REG_32_ADDRESS(port,GPIO_ALTERNATE_FUNCTION_SELECTOR_OFFSET),
                  pin);
    }
    else
    {
        SET_BIT(GET_REG_32_ADDRESS(port,GPIO_ALTERNATE_FUNCTION_SELECTOR_OFFSET),
                pin);
    }
}

void Set_Alternate_Func(uint32 port,uint8 pin,uint8 alternateFunc)
{
    GET_REG_32_ADDRESS(port,GPIO_PORT_CONTROL_OFFSET)|=(uint32)(alternateFunc<<(pin*4));
}

void Set_Direction(uint32 port,uint8 pin,uint8 direction)
{
    if(direction==OUTPUT)
    {
        SET_BIT(GET_REG_32_ADDRESS(port,GPIO_DIRECTION_OFFSET),pin);
    }
    else
    {
        CLEAR_BIT(GET_REG_32_ADDRESS(port,GPIO_DIRECTION_OFFSET),pin);
    }
}



void Set_Internal_Attach(uint32 port,uint8 pin,INTERNAL_ATTACH internalAttach)
{
    switch(internalAttach)
    {
    case PULL_UP:
        SET_BIT(GET_REG_32_ADDRESS(port,GPIO_PULL_UP_SELECTOR_OFFSET),pin);
        break;
    case PULL_DOWN:
        SET_BIT(GET_REG_32_ADDRESS(port,GPIO_PULL_DOWN_SELECTOR_OFFSET),pin);
        break;
    case OPEN_DRAIN:
        SET_BIT(GET_REG_32_ADDRESS(port,GPIO_OPEN_DRAIN_SELECTOR_OFFSET),pin);
        break;
    case NONE:
        CLEAR_BIT(GET_REG_32_ADDRESS(port,GPIO_PULL_UP_SELECTOR_OFFSET),pin);
        CLEAR_BIT(GET_REG_32_ADDRESS(port,GPIO_PULL_DOWN_SELECTOR_OFFSET),pin);
        CLEAR_BIT(GET_REG_32_ADDRESS(port,GPIO_OPEN_DRAIN_SELECTOR_OFFSET),pin);
        break;
    }
}

void Set_Output_Current(uint32 port,uint8 pin,OUTPUT_CURRENT current)
{
    switch(current)
        {
        case DRIVE_2MA:
            SET_BIT(GET_REG_32_ADDRESS(port,GPIO_2_MA_DRIVE_SELECTOR_OFFSET),pin);
            break;
        case DRIVE_4MA:
            SET_BIT(GET_REG_32_ADDRESS(port,GPIO_4_MA_DRIVE_SELECTOR_OFFSET),pin);
            break;
        case DRIVE_8MA:
            SET_BIT(GET_REG_32_ADDRESS(port,GPIO_8_MA_DRIVE_SELECTOR_OFFSET),pin);
            break;
        }
}

