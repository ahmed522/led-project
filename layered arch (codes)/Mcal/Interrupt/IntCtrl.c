/***********************************************************************************
 * 					             				  										    										     *
 * 	 [MODULE]: Interrupt 										    						             				   *
 * 					             				  										    										     *
 * 	 [FILE NAME]: IntCtrl.c		  								               	               	   *
 * 					             			 										    										    	   *
 * 	 [AUTHOR]: Ahmed Abdelaal	        								      		                   *
 * 					             				 										    										       *
 *   [CREATED ON]: 12/09/2022	              			     										         *
 * 							             	           										    									 *
 *   [DESCRIPTION]: source file for interrupt control module	 									   *
 * 			 										    				 										   					           *
 ***********************************************************************************/

#include "IntCtrl.h"
#ifdef IRQs_SIZE
extern const INTERRUPT_TYPE_IRQ g_Chosen_IRQs[IRQs_SIZE];
extern const uint8 g_IRQs_Priority[IRQs_SIZE];
#endif
extern const INTERRUPT_TYPE_SYS g_Chosen_System_Int_and_Faults[System_Int_and_Faults_SIZE];
extern const uint8 g_System_Int_and_Faults_Priority[System_Int_and_Faults_SIZE];
extern uint8 pri_Grp_index[138];
extern uint8 pri_Grp[138];
/***********************************************************************************
 * 									 										    										    						   *
 *              	          Functions Definitions                            *
 * 		            					                                                       *
 ***********************************************************************************/

void Interrupt_init(void)
{
        /* Set periority combination */
        APINT = VECTKEY | PRIORITY_COMBINATION;
#ifdef IRQs_SIZE
        /* Set priority for IRQs */
        for (uint8 i = 0; i < IRQs_SIZE; i++)
        {
                switch (pri_Grp[g_Chosen_IRQs[i]])
                {
                case 0:
                        Set_Priority(PRI0, pri_Grp_index[g_Chosen_IRQs[i]], g_IRQs_Priority[i]);
                        break;
                case 1:
                        Set_Priority(PRI1, pri_Grp_index[g_Chosen_IRQs[i]], g_IRQs_Priority[i]);
                        break;
                case 2:
                        Set_Priority(PRI2, pri_Grp_index[g_Chosen_IRQs[i]], g_IRQs_Priority[i]);
                        break;
                case 3:
                        Set_Priority(PRI3, pri_Grp_index[g_Chosen_IRQs[i]], g_IRQs_Priority[i]);
                        break;
                case 4:
                        Set_Priority(PRI4, pri_Grp_index[g_Chosen_IRQs[i]], g_IRQs_Priority[i]);
                        break;
                case 5:
                        Set_Priority(PRI5, pri_Grp_index[g_Chosen_IRQs[i]], g_IRQs_Priority[i]);
                        break;
                case 6:
                        Set_Priority(PRI6, pri_Grp_index[g_Chosen_IRQs[i]], g_IRQs_Priority[i]);
                        break;
                case 7:
                        Set_Priority(PRI7, pri_Grp_index[g_Chosen_IRQs[i]], g_IRQs_Priority[i]);
                        break;
                case 8:
                        Set_Priority(PRI8, pri_Grp_index[g_Chosen_IRQs[i]], g_IRQs_Priority[i]);
                        break;
                case 9:
                        Set_Priority(PRI9, pri_Grp_index[g_Chosen_IRQs[i]], g_IRQs_Priority[i]);
                        break;
                case 10:
                        Set_Priority(PRI10, pri_Grp_index[g_Chosen_IRQs[i]], g_IRQs_Priority[i]);
                        break;
                case 11:
                        Set_Priority(PRI11, pri_Grp_index[g_Chosen_IRQs[i]], g_IRQs_Priority[i]);
                        break;
                case 12:
                        Set_Priority(PRI12, pri_Grp_index[g_Chosen_IRQs[i]], g_IRQs_Priority[i]);
                        break;
                case 13:
                        Set_Priority(PRI13, pri_Grp_index[g_Chosen_IRQs[i]], g_IRQs_Priority[i]);
                        break;
                case 14:
                        Set_Priority(PRI14, pri_Grp_index[g_Chosen_IRQs[i]], g_IRQs_Priority[i]);
                        break;
                case 15:
                        Set_Priority(PRI15, pri_Grp_index[g_Chosen_IRQs[i]], g_IRQs_Priority[i]);
                        break;
                case 16:
                        Set_Priority(PRI16, pri_Grp_index[g_Chosen_IRQs[i]], g_IRQs_Priority[i]);
                        break;
                case 17:
                        Set_Priority(PRI17, pri_Grp_index[g_Chosen_IRQs[i]], g_IRQs_Priority[i]);
                        break;
                case 18:
                        Set_Priority(PRI18, pri_Grp_index[g_Chosen_IRQs[i]], g_IRQs_Priority[i]);
                        break;
                case 19:
                        Set_Priority(PRI19, pri_Grp_index[g_Chosen_IRQs[i]], g_IRQs_Priority[i]);
                        break;
                case 20:
                        Set_Priority(PRI20, pri_Grp_index[g_Chosen_IRQs[i]], g_IRQs_Priority[i]);
                        break;
                case 21:
                        Set_Priority(PRI21, pri_Grp_index[g_Chosen_IRQs[i]], g_IRQs_Priority[i]);
                        break;
                case 22:
                        Set_Priority(PRI22, pri_Grp_index[g_Chosen_IRQs[i]], g_IRQs_Priority[i]);
                        break;
                case 23:
                        Set_Priority(PRI23, pri_Grp_index[g_Chosen_IRQs[i]], g_IRQs_Priority[i]);
                        break;
                case 24:
                        Set_Priority(PRI24, pri_Grp_index[g_Chosen_IRQs[i]], g_IRQs_Priority[i]);
                        break;
                case 25:
                        Set_Priority(PRI25, pri_Grp_index[g_Chosen_IRQs[i]], g_IRQs_Priority[i]);
                        break;
                case 26:
                        Set_Priority(PRI26, pri_Grp_index[g_Chosen_IRQs[i]], g_IRQs_Priority[i]);
                        break;
                case 27:
                        Set_Priority(PRI27, pri_Grp_index[g_Chosen_IRQs[i]], g_IRQs_Priority[i]);
                        break;
                case 28:
                        Set_Priority(PRI28, pri_Grp_index[g_Chosen_IRQs[i]], g_IRQs_Priority[i]);
                        break;
                case 29:
                        Set_Priority(PRI29, pri_Grp_index[g_Chosen_IRQs[i]], g_IRQs_Priority[i]);
                        break;
                case 30:
                        Set_Priority(PRI30, pri_Grp_index[g_Chosen_IRQs[i]], g_IRQs_Priority[i]);
                        break;
                case 31:
                        Set_Priority(PRI31, pri_Grp_index[g_Chosen_IRQs[i]], g_IRQs_Priority[i]);
                        break;
                case 32:
                        Set_Priority(PRI32, pri_Grp_index[g_Chosen_IRQs[i]], g_IRQs_Priority[i]);
                        break;
                case 33:
                        Set_Priority(PRI33, pri_Grp_index[g_Chosen_IRQs[i]], g_IRQs_Priority[i]);
                        break;
                case 34:
                        Set_Priority(PRI34, pri_Grp_index[g_Chosen_IRQs[i]], g_IRQs_Priority[i]);
                        break;
                }
        }
				        /* Enable IRQs */
								uint32 temp;
        for (uint8 i = 0; i < IRQs_SIZE; i++)
        {
                if (g_Chosen_IRQs[i] <= 31)
                {
                        temp = g_Chosen_IRQs[i] - (32 * 0);
                        EN0 |= (1 << temp);
                }
                else if (g_Chosen_IRQs[i] >= 32 && g_Chosen_IRQs[i] <= 63)
                {
                        temp = g_Chosen_IRQs[i] - (32 * 1);
                        EN1 |= (1 << temp);
                }
                else if (g_Chosen_IRQs[i] >= 64 && g_Chosen_IRQs[i] <= 95)
                {
                        temp = g_Chosen_IRQs[i] - (32 * 2);
                        EN2 |= (1 << temp);
                }
                else if (g_Chosen_IRQs[i] >= 96 && g_Chosen_IRQs[i] <= 127)
                {
                        temp = g_Chosen_IRQs[i] - (32 * 3);
                        EN3 |= (1 << temp);
                }
                else if (g_Chosen_IRQs[i] >= 128 && g_Chosen_IRQs[i] <= 138)
                {
                        temp = g_Chosen_IRQs[i] - (32 * 4);
                        EN3 |= (1 << temp);
                }
        }

#endif
#ifdef System_Int_and_Faults_SIZE
        /* Set priority for system interrupts and faults */
        for (uint8 i = 0; i < System_Int_and_Faults_SIZE; i++)
        {
                switch (g_Chosen_System_Int_and_Faults[i])
                {
                case MEMORY_MANAGEMENT:
                        (SYSPRI1).BF.MEM = g_System_Int_and_Faults_Priority[i];
                        break;
                case BUS_FAULT:
                        (SYSPRI1).BF.BUS = g_System_Int_and_Faults_Priority[i];
                        break;
                case USAGE_FAULT:
                        (SYSPRI1).BF.USAGE = g_System_Int_and_Faults_Priority[i];
                        break;
                case SVCALL:
                        (SYSPRI2).BF.SVC = g_System_Int_and_Faults_Priority[i];
                        break;
                case DEBUG_MONITOR:
                        (SYSPRI3).BF.DEBUG = g_System_Int_and_Faults_Priority[i];
                        break;
                case PENDSV:
                        (SYSPRI3).BF.PENDSV = g_System_Int_and_Faults_Priority[i];
                        break;
                case SYS_TICK:
                        (SYSPRI3).BF.TICK = g_System_Int_and_Faults_Priority[i];
                        break;
                default:
                        break;
                }
        }

        

        /* Enable System interrupts and faults */
        for (uint8 i = 0; i < System_Int_and_Faults_SIZE; i++)
        {
                switch (g_Chosen_System_Int_and_Faults[i])
                {
                case MEMORY_MANAGEMENT:
                        (SYSHNDCTRL).BF.MEM = g_System_Int_and_Faults_Priority[i];
                        break;
                case BUS_FAULT:
                        (SYSHNDCTRL).BF.BUS = g_System_Int_and_Faults_Priority[i];
                        break;
                case USAGE_FAULT:
                        (SYSHNDCTRL).BF.USAGE = g_System_Int_and_Faults_Priority[i];
                        break;
                default:
                        break;
                }
        }
				#endif
}
void Set_Priority(PRIx_Tag pri, uint8 grp, uint8 priority)
{
        switch (grp)
        {
        case 0:
                (pri).BF.INTA = priority;
                break;
        case 1:
                (pri).BF.INTB = priority;
                break;
        case 2:
                (pri).BF.INTC = priority;
                break;
        case 3:
                (pri).BF.INTD = priority;
                break;
        }
}
