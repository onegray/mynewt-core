/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */
#ifndef STM32_COMMON_HAL_H
#define STM32_COMMON_HAL_H

#ifdef __cplusplus
extern "C" {
#endif

#include <mcu/stm32_hal.h>

#define UART_CNT (((uint8_t)(MYNEWT_VAL(UART_0) != 0)) + \
                  ((uint8_t)(MYNEWT_VAL(UART_1) != 0)) + \
                  ((uint8_t)(MYNEWT_VAL(UART_2) != 0)) + \
                  ((uint8_t)(MYNEWT_VAL(UART_3) != 0)) + \
                  ((uint8_t)(MYNEWT_VAL(UART_4) != 0)) + \
                  ((uint8_t)(MYNEWT_VAL(UART_5) != 0)) + \
                  ((uint8_t)(MYNEWT_VAL(UART_6) != 0)) + \
                  ((uint8_t)(MYNEWT_VAL(UART_7) != 0)) + \
                  ((uint8_t)(MYNEWT_VAL(UART_8) != 0)) + \
                  ((uint8_t)(MYNEWT_VAL(UART_9) != 0)))

#define PWM_CNT (((uint8_t)(MYNEWT_VAL(PWM_0) != 0)) + \
                 ((uint8_t)(MYNEWT_VAL(PWM_1) != 0)) + \
                 ((uint8_t)(MYNEWT_VAL(PWM_2) != 0)))

uint32_t stm32_hal_timer_get_freq(void *timx);
void stm32_periph_create(void);

#ifdef __cplusplus
}
#endif

#endif
