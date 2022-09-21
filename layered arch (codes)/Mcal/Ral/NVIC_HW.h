/***********************************************************************************
 * 																				   *
 * 	 [MODULE]: NVIC									                               *
 * 																				   *
 * 	 [FILE NAME]: NVIC_HW.h			    			        				       *
 * 																				   *
 * 	 [AUTHOR]: Ahmed Abdelaal													   *
 * 																				   *
 * 	 [CREATED ON]: 12/09/2022													   *
 * 																				   *
 *   [DESCRIPTION]: Header file define NVIC hardware regiters					   *
 * 																				   *
 ***********************************************************************************/

#ifndef NVIC_H_
#define NVIC_H_
#include "common.h"
/*---------------------------------------------------------------------------------*
 *                               GLOBAL CONST MACROS                               *
 *---------------------------------------------------------------------------------*/

/*--------------------------------- NVIC Registers ---------------------------------*/
/*
    Enable IRQs
*/
#define EN0 *((volatile uint32 *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x100))
#define EN1 *((volatile uint32 *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x104))
#define EN2 *((volatile uint32 *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x108))
#define EN3 *((volatile uint32 *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x10C))
#define EN4 *((volatile uint32 *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x110))
/*
    Disable IRQs
*/
#define DIS0 *((volatile uint32 *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x180))
#define DIS1 *((volatile uint32 *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x184))
#define DIS2 *((volatile uint32 *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x188))
#define DIS3 *((volatile uint32 *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x18C))
#define DIS4 *((volatile uint32 *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x190))
/*
   Set Pending for IRQs
*/
#define PEND0 *((volatile uint32 *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x204))
#define PEND1 *((volatile uint32 *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x208))
#define PEND2 *((volatile uint32 *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x20C))
#define PEND3 *((volatile uint32 *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x210))
#define PEND4 *((volatile uint32 *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x200))
/*
   Clear Pending for IRQs
*/
#define UNPEND0 *((volatile uint32 *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x280))
#define UNPEND1 *((volatile uint32 *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x284))
#define UNPEND2 *((volatile uint32 *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x288))
#define UNPEND3 *((volatile uint32 *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x28C))
#define UNPEND4 *((volatile uint32 *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x290))
/*
   Set IRQs in active state
*/
#define ACTIVE0 *((volatile uint32 *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x300))
#define ACTIVE1 *((volatile uint32 *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x304))
#define ACTIVE2 *((volatile uint32 *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x308))
#define ACTIVE3 *((volatile uint32 *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x30C))
#define ACTIVE4 *((volatile uint32 *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x310))
/*
   Set piriorty for IRQs
*/
#define PRI0 *((volatile PRIx_Tag *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x400))
#define PRI1 *((volatile PRIx_Tag *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x404))
#define PRI2 *((volatile PRIx_Tag *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x408))
#define PRI3 *((volatile PRIx_Tag *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x40C))
#define PRI4 *((volatile PRIx_Tag *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x410))
#define PRI5 *((volatile PRIx_Tag *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x414))
#define PRI6 *((volatile PRIx_Tag *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x418))
#define PRI7 *((volatile PRIx_Tag *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x41C))
#define PRI8 *((volatile PRIx_Tag *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x420))
#define PRI9 *((volatile PRIx_Tag *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x424))
#define PRI10 *((volatile PRIx_Tag *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x428))
#define PRI11 *((volatile PRIx_Tag *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x42C))
#define PRI12 *((volatile PRIx_Tag *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x430))
#define PRI13 *((volatile PRIx_Tag *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x434))
#define PRI14 *((volatile PRIx_Tag *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x438))
#define PRI15 *((volatile PRIx_Tag *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x43C))
#define PRI16 *((volatile PRIx_Tag *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x440))
#define PRI17 *((volatile PRIx_Tag *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x444))
#define PRI18 *((volatile PRIx_Tag *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x448))
#define PRI19 *((volatile PRIx_Tag *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x44C))
#define PRI20 *((volatile PRIx_Tag *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x450))
#define PRI21 *((volatile PRIx_Tag *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x454))
#define PRI22 *((volatile PRIx_Tag *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x458))
#define PRI23 *((volatile PRIx_Tag *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x45C))
#define PRI24 *((volatile PRIx_Tag *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x460))
#define PRI25 *((volatile PRIx_Tag *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x464))
#define PRI26 *((volatile PRIx_Tag *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x468))
#define PRI27 *((volatile PRIx_Tag *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x46C))
#define PRI28 *((volatile PRIx_Tag *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x470))
#define PRI29 *((volatile PRIx_Tag *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x474))
#define PRI30 *((volatile PRIx_Tag *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x478))
#define PRI31 *((volatile PRIx_Tag *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x47C))
#define PRI32 *((volatile PRIx_Tag *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x480))
#define PRI33 *((volatile PRIx_Tag *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x484))
#define PRI34 *((volatile PRIx_Tag *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0x488))

/*
   Software Trigger For IRQs 
*/
#define SWTRIG *((volatile uint32 *)(CORTEX_M4_PERIPHERALS_BASE_ADDRESS + 0xF00))

/*---------------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------------*
 *                            REGISTERS BIT-FIELD STRUCTS                          *
 *---------------------------------------------------------------------------------*/

/* PRIx Bit Fields */
typedef struct 
{
    uint32          :5;
    uint32 INTA     :3;    
    uint32          :5;
    uint32 INTB     :3;    
    uint32          :5;
    uint32 INTC     :3;    
    uint32          :5;
    uint32 INTD     :3;    

}PRIx_BF;
typedef union 
{
    uint32 REG;
    PRIx_BF BF;
}PRIx_Tag;


#endif



