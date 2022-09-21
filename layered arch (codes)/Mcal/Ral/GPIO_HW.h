/***********************************************************************************
 *                                                                                 *
 *   [MODULE]: GPIO                                                                *
 *                                                                                 *
 *   [FILE NAME]: GPIO_HW.h                                                        *
 *                                                                                 *
 *   [AUTHOR]: Ahmed Abdelaal                                                      *
 *                                                                                 *
 *   [CREATED ON]: 18/09/2022                                                      *
 *                                                                                 *
 *   [DESCRIPTION]: Header file define GPIO hardware registers                      *
 *                                                                                 *
 ***********************************************************************************/
#ifndef MCAL_RAL_GPIO_HW_H_
#define MCAL_RAL_GPIO_HW_H_

/*---------------------------------------------------------------------------------*
 *                                     INCLUDES                                    *
 *---------------------------------------------------------------------------------*/
#include "std_types.h"
/*---------------------------------------------------------------------------------*
 *                               GLOBAL CONST MACROS                               *
 *---------------------------------------------------------------------------------*/
/*#define ADVANCED_HIGH_PERFORMANCE_BUS*/

#ifdef ADVANCED_HIGH_PERFORMANCE_BUS
#define BASE_PORT_A     0x40058000
#define BASE_PORT_B     0x40059000
#define BASE_PORT_C     0x4005A000
#define BASE_PORT_D     0x4005B000
#define BASE_PORT_E     0x4005C000
#define BASE_PORT_F     0x4005D000
#endif

#ifndef ADVANCED_HIGH_PERFORMANCE_BUS
#define BASE_PORT_A     0x40004000
#define BASE_PORT_B     0x40005000
#define BASE_PORT_C     0x40006000
#define BASE_PORT_D     0x40007000
#define BASE_PORT_E     0x40024000
#define BASE_PORT_F     0x40025000
#endif
/*-------------------------------- GPIO Registers ---------------------------------*/
/* Data Control */
#define GPIO_DATA_OFFSET                            0x000
#define GPIO_DIRECTION_OFFSET                       0x400
/* Interrupt Control */
#define GPIO_INTERRUPT_SENSE_OFFSET                 0x404
#define GPIO_INTERRUPT_BOTH_EDGES_OFFSET            0x408
#define GPIO_INTERRUPT_EVENT_OFFSET                 0x40C
#define GPIO_INTERRUPT_MASK_OFFSET                  0x410
#define GPIO_RAW_INTERRUPT_STATUS_OFFSET            0x414
#define GPIO_MASKED_INTERRUPT_STATUS_OFFSET         0x418
#define GPIO_INTERRUPT_CLEAR_OFFSET                 0x41C
/* Mode Control */
#define GPIO_ALTERNATE_FUNCTION_SELECTOR_OFFSET     0x420
#define GPIO_ADC_CONTROL_OFFSET                     0x530
#define GPIO_DMA_CONTROL_OFFSET                     0x534
/* Pad Control */
#define GPIO_2_MA_DRIVE_SELECTOR_OFFSET             0x500
#define GPIO_4_MA_DRIVE_SELECTOR_OFFSET             0x504
#define GPIO_8_MA_DRIVE_SELECTOR_OFFSET             0x508
#define GPIO_OPEN_DRAIN_SELECTOR_OFFSET             0x50C
#define GPIO_PULL_UP_SELECTOR_OFFSET                0x510
#define GPIO_PULL_DOWN_SELECTOR_OFFSET              0x514
#define GPIO_SLEW_RATE_CONTROL_SELECTOR_OFFSET      0x518
#define GPIO_DIGITAL_ENABLE_OFFSET                  0x51C
#define GPIO_ANALOG_MODE_SELECTOR_OFFSET            0x528
/* Commit Control */
#define GPIO_LOCK_OFFSET                            0x520
#define GPIO_COMMIT_OFFSET                          0x524
/* Port Control*/
#define GPIO_PORT_CONTROL_OFFSET                    0x52C
/*Identification Registers*/
#define GPIO_PERIPHRAL_ID_4_OFFSET                  0xFD0
#define GPIO_PERIPHRAL_ID_5_OFFSET                  0xFD4
#define GPIO_PERIPHRAL_ID_6_OFFSET                  0xFD8
#define GPIO_PERIPHRAL_ID_7_OFFSET                  0xFDC
#define GPIO_PERIPHRAL_ID_0_OFFSET                  0xFE0
#define GPIO_PERIPHRAL_ID_1_OFFSET                  0xFE4
#define GPIO_PERIPHRAL_ID_2_OFFSET                  0xFE8
#define GPIO_PERIPHRAL_ID_3_OFFSET                  0xFEC
#define GPIO_PRIMECELL_ID_0_OFFSET                  0xFF0
#define GPIO_PRIMECELL_ID_1_OFFSET                  0xFF4
#define GPIO_PRIMECELL_ID_2_OFFSET                  0xFF8
#define GPIO_PRIMECELL_ID_3_OFFSET                  0xFFC

#endif /* MCAL_RAL_GPIO_HW_H_ */
