/***********************************************************************************
 * 																				   *
 * 	 [MODULE]: SCB									       *
 * 																				   *
 * 	 [FILE NAME]: SCB_HW.h			    			        						   *
 * 																				   *
 * 	 [AUTHOR]: Ahmed Abdelaal													   *
 * 																				   *
 * 	 [CREATED ON]: 12/09/2022													   *
 * 																				   *
 *   [DESCRIPTION]: Header file define SCB hardware regiters					       *
 * 																				   *
 ***********************************************************************************/

#ifndef SCB_H_
#define SCB_H_
#include "common.h"
/*---------------------------------------------------------------------------------*
 *                               GLOBAL CONST MACROS                               *
 *---------------------------------------------------------------------------------*/

#define VECTKEY (uint32)0x05FA0000 /* key for using APINT register in SCB */

/*--------------------------------- SCB Registers ---------------------------------*/

#define VTABLE   *((volatile VTABLE_Tag* )(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0xD08))
#define APINT   *((volatile uint32* )(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0xD0C))
#define SYSPRI1 *((volatile SYSPRI1_Tag* )(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0xD18))
#define SYSPRI2 *((volatile SYSPRI2_Tag* )(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0xD1C))
#define SYSPRI3 *((volatile SYSPRI3_Tag* )(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0xD20))
#define SYSHNDCTRL *((volatile SYSHNDCTRL_Tag* )(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0xD24))
/*---------------------------------------------------------------------------------*
 *                            REGISTERS BIT-FIELD STRUCTS                          *
 *---------------------------------------------------------------------------------*/

/* SYSPRI1 Bit Fields */
typedef struct 
{
    uint32          :5;
    uint32 MEM      :3;    
    uint32          :5;
    uint32 BUS      :3;    
    uint32          :5;
    uint32 USAGE    :3;    
    uint32          :8;

}SYSPRI1_BF;
typedef union 
{
    uint32 REG;
    SYSPRI1_BF BF;
}SYSPRI1_Tag;

/* SYSPRI2 Bit Fields */
typedef struct 
{
    uint32          :29;
    uint32 SVC      :3;    

}SYSPRI2_BF;
typedef union 
{
    uint32 REG;
    SYSPRI2_BF BF;
}SYSPRI2_Tag;


/* SYSPRI3 Bit Fields */
typedef struct 
{
    uint32          :5;
    uint32 DEBUG    :3;    
    uint32          :13;
    uint32 PENDSV   :3;    
    uint32          :5;
    uint32 TICK     :3;    
}SYSPRI3_BF;
typedef union 
{
    uint32 REG;
    SYSPRI3_BF BF;
}SYSPRI3_Tag;
/* SYSHNDCTRL Bit Fields */
typedef struct 
{
    uint32 MEMA     :1;   /* Memory Management Fault Active */   
    uint32 BUSA     :1;   /* Bus Fault Active */ 
    uint32          :1;   
    uint32 USGA     :1;   /* Usage Fault Active */
    uint32          :3;   
    uint32 SVCA     :1;   /* SVC Call Active */
    uint32 MON      :1;   /* Debug Monitor Active */
    uint32          :1;   
    uint32 PNDSV    :1;   /* PendSV Exception Active */
    uint32 TICK     :1;   /* SysTick Exception Active */
    uint32 USAGEP   :1;   /* Usage Fault Pending */
    uint32 MEMP     :1;   /* Memory Management Fault Pending */
    uint32 BUSP     :1;   /* Bus Fault Pending */
    uint32 SVC      :1;   /* SVC Call Pending */
    uint32 MEM      :1;   /* Memory Management Fault Enable */
    uint32 BUS      :1;   /* Bus Fault Enable */
    uint32 USAGE    :1;   /* Usage Fault Enable */
    uint32          :13;  

}SYSHNDCTRL_BF;
typedef union 
{
    uint32 REG;
    SYSHNDCTRL_BF BF;
}SYSHNDCTRL_Tag;


/* VTABLE Bit Fields */
typedef struct 
{
    uint32          :10;
    uint32 OFFSET   :22;        
}VTABLE_BF;
typedef union 
{
    uint32 REG;
    VTABLE_BF BF ;
}VTABLE_Tag;
/*---------------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------------*/
#endif



