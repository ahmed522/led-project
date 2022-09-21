/***********************************************************************************
 *                                                                                 *
 *   [MODULE]: GPIO                                                                *
 *                                                                                 *
 *   [FILE NAME]: GPIO_types.h                                                     *
 *                                                                                 *
 *   [AUTHOR]: Ahmed Abdelaal                                                      *
 *                                                                                 *
 *   [CREATED ON]: 18/09/2022                                                      *
 *                                                                                 *
 *   [DESCRIPTION]: Header file define GPIO types                                  *
 *                                                                                 *
 ***********************************************************************************/
#ifndef MCAL_GPIO_GPIO_TYPES_H_
#define MCAL_GPIO_GPIO_TYPES_H_

/*---------------------------------------------------------------------------------*
 *                                     INCLUDES                                    *
 *---------------------------------------------------------------------------------*/
#include "std_types.h"

/*---------------------------------------------------------------------------------*
 *                               GLOBAL CONST MACROS                               *
 *---------------------------------------------------------------------------------*/
/* Pins */

/* Port A pins */
#define PA0 0
#define PA1 1
#define PA2 2
#define PA3 3
#define PA4 4
#define PA5 5
#define PA6 6
#define PA7 7
/* Port B pins */
#define PB0 0
#define PB1 1
#define PB2 2
#define PB3 3
#define PB4 4
#define PB5 5
#define PB6 6
#define PB7 7
/* Port C pins */
#define PC0 0
#define PC1 1
#define PC2 2
#define PC3 3
#define PC4 4
#define PC5 5
#define PC6 6
#define PC7 7
/* Port D pins */
#define PD0 0
#define PD1 1
#define PD2 2
#define PD3 3
#define PD4 4
#define PD5 5
#define PD6 6
#define PD7 7
/* Port E pins */
#define PE0 0
#define PE1 1
#define PE2 2
#define PE3 3
#define PE4 4
#define PE5 5
/* Port F pins */
#define PF0 0
#define PF1 1
#define PF2 2
#define PF3 3
#define PF4 4

/* Pin Direction */
#define INPUT 0
#define OUTPUT 1

/*---------------------------------------------------------------------------------*
 *                                       ENUMS                                     *
 *---------------------------------------------------------------------------------*/
/* Ports */
typedef enum
{
    PORT_A,
    PORT_B,
    PORT_C,
    PORT_D,
    PORT_E,
    PORT_F
} PORT;
/* Pin Mode */
typedef enum
{
    GPIO,
    ALTERNATE_FUNC,
} MODE;

/* Alternate functions */
/*PORT A*/
typedef enum
{
    PA0_U0Rx = 1 /* default */,
    PA0_CAN1Rx = 8,
} PMC_PA0;
typedef enum
{
    PA1_U0Tx = 1 /* default */,
    PA1_CAN1Tx = 8,
} PMC_PA1;
typedef enum
{
    PA2_SSI0Clk = 2 /* default */,
} PMC_PA2;
typedef enum
{
    PA3_SSI0Fss = 2 /* default */,
} PMC_PA3;
typedef enum
{
    PA4_SSI0Rx = 2 /* default */,
} PMC_PA4;
typedef enum
{
    PA5_SSI0Tx = 2 /* default */,
} PMC_PA5;
typedef enum
{
    PA6_I2C1SCL = 3,
    PA6_M1PWM2 = 5,
} PMC_PA6;
typedef enum
{
    PA7_I2C1SDA = 3,
    PA7_M1PWM3 = 5,
} PMC_PA7;
/*PORT B*/
typedef enum
{
    PB0_U1Rx = 1,
    PB0_T2CCP0 = 7,
} PMC_PB0;
typedef enum
{
    PB1_U1Tx = 1,
    PB1_T2CCP1 = 7,
} PMC_PB1;
typedef enum
{
    PB2_I2C0SCL = 3 /* default */,
    PB2_T3CCP0 = 7,
} PMC_PB2;
typedef enum
{
    PB3_I2C0SDA = 3 /* default */,
    PB3_T3CCP1 = 7,
} PMC_PB3;
typedef enum
{
    PB4_SSI2Clk = 2,
    PB4_M0PWM2 = 4,
    PB4_T1CCP0 = 7,
    PB4_CAN0Rx = 8,
} PMC_PB4;
typedef enum
{
    PB5_SSI2Fss = 2,
    PB5_M0PWM3 = 4,
    PB5_T1CCP1 = 7,
    PB5_CAN0Tx = 8,
} PMC_PB5;
typedef enum
{
    PB6_SSI2Rx = 2,
    PB6_M0PWM0 = 4,
    PB6_T0CCP0 = 7,
} PMC_PB6;
typedef enum
{
    PB7_SSI2Tx = 2,
    PB7_M0PWM1 = 4,
    PB7_T0CCP1 = 7,
} PMC_PB7;
/*PORT C*/
typedef enum
{
    PC0_TCK_SWCLK = 1 /* default */,
    PC0_T4CCP0 = 7,
} PMC_PC0;
typedef enum
{
    PC1_TMS_SWDIO = 1 /* default */,
    PC1_T4CCP1 = 7,
} PMC_PC1;
typedef enum
{
    PC2_TDI = 1 /* default */,
    PC2_T5CCP0 = 7,
} PMC_PC2;
typedef enum
{
    PC3_TDO_SWO = 1 /* default */,
    PC3_T5CCP1 = 7,
} PMC_PC3;
typedef enum
{
    PC4_U4Rx = 1,
    PC4_U1Rx = 2,
    PC4_M0PWM6 = 4,
    PC4_IDX1 = 6,
    PC4_WT0CCP0 = 7,
    PC4_U1RTS = 8,
} PMC_PC4;
typedef enum
{
    PC5_U4Tx = 1,
    PC5_U1Tx = 2,
    PC5_M0PWM7 = 4,
    PC5_PhA1 = 6,
    PC5_WT0CCP1 = 7,
    PC5_U1CTS = 8,
} PMC_PC5;
typedef enum
{
    PC6_U3Rx = 1,
    PC6_PhB1 = 6,
    PC6_WT1CCP0 = 7,
    PC6_USB0EPEN = 8,
} PMC_PC6;
typedef enum
{
    PC7_U3Tx = 1,
    PC7_WT1CCP1 = 7,
    PC7_USB0PFLT = 8,
} PMC_PC7;
/*PORT D*/
typedef enum
{
    PD0_SSI3Clk = 1,
    PD0_SSI1Clk = 2,
    PD0_I2C3SCL = 3,
    PD0_M0PWM6 = 4,
    PD0_M1PWM0 = 5,
    PD0_WT2CCP0 = 7,
} PMC_PD0;
typedef enum
{
    PD1_SSI3Fss = 1,
    PD1_SSI1Fss = 2,
    PD1_I2C3SDA = 3,
    PD1_M0PWM7 = 4,
    PD1_M1PWM1 = 5,
    PD1_WT2CCP1 = 7,
} PMC_PD1;
typedef enum
{
    PD2_SSI3Rx = 1,
    PD2_SSI1Rx = 2,
    PD2_M0FAULT0 = 4,
    PD2_WT3CCP0 = 7,
    PD2_USB0EPEN = 8,
} PMC_PD2;
typedef enum
{
    PD3_SSI3Tx = 1,
    PD3_SSI1Tx = 2,
    PD3_IDX0 = 6,
    PD3_WT3CCP1 = 7,
    PD3_USB0PFLT = 8,
} PMC_PD3;
typedef enum
{
    PD4_U6Rx = 1,
    PD4_WT4CCP0 = 7,
} PMC_PD4;
typedef enum
{
    PD5_U6Tx = 1,
    PD5_WT4CCP1 = 7,
} PMC_PD5;
typedef enum
{
    PD6_U2Rx = 1,
    PD6_M0FAULT0 = 4,
    PD6_PhA0 = 6,
    PD6_WT5CCP0 = 7,
} PMC_PD6;
typedef enum
{
    PD7_U2Tx = 1,
    PD7_PhB0 = 6,
    PD7_WT5CCP1 = 7,
    PD7_NMI = 8
} PMC_PD7;
/*PORT E*/
typedef enum
{
    PE0_U7Rx = 1,
} PMC_PE0;
typedef enum
{
    PE1_U7Tx = 1,
} PMC_PE1;
typedef enum
{
    PE4_U5Rx = 1,
    PE4_I2C2SCL = 3,
    PE4_M0PWM4 = 4,
    PE4_M1PWM2 = 5,
    PE4_CAN0Rx = 8,
} PMC_PE4;
typedef enum
{
    PE5_U5Tx = 1,
    PE5_I2C2SDA = 3,
    PE5_M0PWM5 = 4,
    PE5_M1PWM3 = 5,
    PE5_CAN0Tx = 8,
} PMC_PE5;
/*PORT F*/
typedef enum
{
    PF0_U1RTS = 1,
    PF0_SSI1Rx = 2,
    PF0_CAN0Rx = 3,
    PF0_M1PWM4 = 5,
    PF0_PhA0 = 6,
    PF0_T0CCP0 = 7,
    PF0_NMI = 8,
    PF0_C0o = 9,
} PMC_PF0;
typedef enum
{
    PF1_U1CTS = 1,
    PF1_SSI1Tx = 2,
    PF1_M1PWM5 = 5,
    PF1_PhB0 = 6,
    PF1_T0CCP1 = 7,
    PF1_C1o = 9,
    PF1_TRD1 = 14,
} PMC_PF1;
typedef enum
{
    PF2_SSI1Clk = 2,
    PF2_M0FAULT0 = 4,
    PF2_M1PWM6 = 5,
    PF2_T1CCP0 = 7,
    PF2_TRD0 = 14,
} PMC_PF2;
typedef enum
{
    PF3_SSI1Fss = 2,
    PF3_CAN0Tx = 3,
    PF3_M1PWM7 = 5,
    PF3_T1CCP1 = 7,
    PF3_TRCLK = 14,
} PMC_PF3;
typedef enum
{
    PF4_M1FAULT0 = 5,
    PF4_IDX0 = 6,
    PF4_T2CCP0 = 7,
    PF4_USB0EPEN = 8
} PMC_PF4;

/* Pin Signal */

typedef enum
{
    ANALOG,
    DIGITAL
}SIGNAL;

/* Pin Internal attach */
typedef enum
{
    NONE,
    PULL_UP,
    PULL_DOWN,
    OPEN_DRAIN
} INTERNAL_ATTACH;

/* Pin Output current */
typedef enum
{
    DRIVE_2MA,
    DRIVE_4MA,
    DRIVE_8MA
} OUTPUT_CURRENT;

/*---------------------------------------------------------------------------------*
 *                                STRUCTS AND UNIONS                               *
 *---------------------------------------------------------------------------------*/
/* Pin Configuration */
typedef struct CONFIG
{
    PORT PORT;
    uint8 PIN_NUMBER;
    uint8 PIN_DIR;
    MODE PIN_MODE;
    uint8 PIN_FUNC;
    SIGNAL PIN_SIGNAL;
    INTERNAL_ATTACH PIN_ATTACH;
    OUTPUT_CURRENT PIN_CURRENT;
} CONFIG;

/*---------------------------------------------------------------------------------*
 *                               FUNCTION PROTOTYPES                               *
 *---------------------------------------------------------------------------------*/

#endif /* MCAL_GPIO_GPIO_TYPES_H_ */
