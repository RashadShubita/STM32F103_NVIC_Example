/*******************************************************************************
 * @file    irq.h
 * @author  Rashad Shubita
 * @email   shubitarashad@gmail.com
 * @date    01.02.2019
 *
 * @brief   IRQ configuration header file
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

/* Define to prevent recursive inclusion */
#ifndef IRQ_H_
#define IRQ_H_

/* Includes */
#include "stm32f10x.h"


/**
 * @brief   LEDs IRQs
 */

enum MyIRQs_e
{
  Yellow_LED_ON_IRQ = EXTI0_IRQn,    /*!<  yellow LED ON interrupt          */
  Yellow_LED_OFF_IRQ = EXTI1_IRQn,   /*!<  yellow LED OFF interrupt         */
  RED_LED_ON_IRQ = EXTI2_IRQn,      /*!<  red LED ON interrupt            */
  RED_LED_OFF_IRQ = EXTI3_IRQn      /*!<  red LED OFF interrupt           */
} MyIRQs;


/**
 * @brief   NVIC IRQs initialization function
 * @note
 * @param   None
 * @retval  None
 */
void IRQ_Init(void);


#endif /* IRQ_H_ */
