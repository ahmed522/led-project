/***********************************************************************************
 *                                                                                 *
 *   [MODULE]: GPIO                                                                *
 *                                                                                 *
 *   [FILE NAME]: GPIO_conf.c                                                      *
 *                                                                                 *
 *   [AUTHOR]: Ahmed Abdelaal                                                      *
 *                                                                                 *
 *   [CREATED ON]: 18/09/2022                                                      *
 *                                                                                 *
 *   [DESCRIPTION]: Source file implement GPIO user configurations                 *
 *                                                                                 *
 ***********************************************************************************/
/*---------------------------------------------------------------------------------*
 *                                     INCLUDES                                    *
 *---------------------------------------------------------------------------------*/
#include "GPIO_conf.h"

/*---------------------------------------------------------------------------------*/
CONFIG configure_Pins[1] =
    {
        (CONFIG){
            .PORT = PORT_F,
            .PIN_NUMBER = PF2,
            .PIN_DIR = OUTPUT,
            .PIN_MODE = GPIO,
            .PIN_FUNC = NULL,
            .PIN_SIGNAL = DIGITAL,
            .PIN_ATTACH = NONE,
            .PIN_CURRENT = DRIVE_2MA
        },  
    };
