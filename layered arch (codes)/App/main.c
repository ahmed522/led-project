#include "Systick.h"
#include "Systick_Config.h"
#include "GPIO.h"
#include "GPIO_conf.h"
#include "DIO.h"
#include "IntCtrl.h"
#include "IntCtrl_Conf.h"


extern CONFIG configure_Pins[1];
void Systick_Callback(void);
extern CONFIG_SYSTICK* configurations_ptr;
uint8 flag=HIGH;
int main(void)
{
	  Port_Init(configure_Pins,1);
	  Interrupt_init();
    Configure_Systick(1, 1.5, Systick_Callback);
		Write_Channel(BASE_PORT_F,PF2,HIGH);
    Systick_Init(configurations_ptr);
	
    while(HIGH){}
}
void Systick_Callback(void)
{
	if(flag)
	{
		Write_Channel(BASE_PORT_F,PF2,LOW);
		GET_REG_32_ADDRESS(CORTEX_M4_PERIPHERALS_BASE_ADDRESS,\
                       SYSTICK_RELOAD_VALUE_REGISTER_OFFSET)=(configurations_ptr->ticks_Off)-1;
		flag=LOW;
	}
	else
	{
		Write_Channel(BASE_PORT_F,PF2,HIGH);
		GET_REG_32_ADDRESS(CORTEX_M4_PERIPHERALS_BASE_ADDRESS,\
                       SYSTICK_RELOAD_VALUE_REGISTER_OFFSET)=(configurations_ptr->ticks_On)-1;
		flag=HIGH;
	}
	
}
