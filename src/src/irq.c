/*******************************************************************************
 * @file    irq.c
 * @author  Rashad Shubita
 * @email   shubitarashad@gmail.com
 * @date    01.02.2019
 *
 * @brief   IRQ configuration source file
 * @note
 *
@verbatim
Copyright (C) 2019, Rashad Shubita

This program is free software: you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free Software
Foundation, either version 3 of the License, or any later version.

This program is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
this program.  If not, see <http://www.gnu.org/licenses/>.
@endverbatim
*******************************************************************************/


/* Includes */
#include "irq.h"

/**
 * @brief   NVIC IRQs initialization function
 * @note
 * @param   None
 * @retval  None
 */
void IRQ_Init(void)
{
	  /* Set priority group to 3
	   * bits[3:0] are the sub-priority,
	   * bits[7:4] are the pre-empt priority */
	  NVIC_SetPriorityGrouping(3);

	  /* Set priority levels */
	  NVIC_SetPriority(Yellow_LED_OFF_IRQ, 2);
	  NVIC_SetPriority(RED_LED_OFF_IRQ,   3);

	  NVIC_SetPriority(Yellow_LED_ON_IRQ,  4);
	  NVIC_SetPriority(RED_LED_ON_IRQ,    5);

	  /* Enable interrupts at NVIC */
	  NVIC_EnableIRQ(Yellow_LED_OFF_IRQ);
	  NVIC_EnableIRQ(RED_LED_OFF_IRQ);

	  NVIC_EnableIRQ(Yellow_LED_ON_IRQ);
	  NVIC_EnableIRQ(RED_LED_ON_IRQ);

}


