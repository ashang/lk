/*
 * Copyright (c) 2012 Travis Geiselbrecht
 *
 * Use of this source code is governed by a MIT-style
 * license that can be found in the LICENSE file or at
 * https://opensource.org/licenses/MIT
 */
#ifndef __TARGET_GPIOCONFIG_H
#define __TARGET_GPIOCONFIG_H

#include <platform/gpio.h>
#include <platform/stm32.h>

#define GPIO_LED_ON GPIO_PIN_RESET
#define GPIO_LED_OFF GPIO_PIN_SET

#define GPIO_USART3_TX GPIO(GPIO_PORT_B, 10)
#define GPIO_USART3_RX GPIO(GPIO_PORT_B, 11)

#define GPIO_LED108 GPIO(GPIO_PORT_E, 3)
#define GPIO_LED109 GPIO(GPIO_PORT_E, 4)
#define GPIO_LED110 GPIO(GPIO_PORT_E, 5)
#define GPIO_LED111 GPIO(GPIO_PORT_E, 6)

#define GPIO_LED112 GPIO(GPIO_PORT_D, 6)
#define GPIO_LED113 GPIO(GPIO_PORT_D, 7)
#define GPIO_LED114 GPIO(GPIO_PORT_J, 10)
#define GPIO_LED115 GPIO(GPIO_PORT_J, 11)

#define GPIO_SHIELD_D0 GPIO(GPIO_PORT_B, 11)
#define GPIO_SHIELD_D1 GPIO(GPIO_PORT_B, 10)
#define GPIO_SHIELD_D2 GPIO(GPIO_PORT_E, 3)
#define GPIO_SHIELD_D3 GPIO(GPIO_PORT_E, 4)
#define GPIO_SHIELD_D4 GPIO(GPIO_PORT_E, 5)
#define GPIO_SHIELD_D5 GPIO(GPIO_PORT_E, 6)
#define GPIO_SHIELD_D6 GPIO(GPIO_PORT_D, 6)
#define GPIO_SHIELD_D7 GPIO(GPIO_PORT_D, 7)
#define GPIO_SHIELD_D8 GPIO(GPIO_PORT_J, 10)
#define GPIO_SHIELD_D9 GPIO(GPIO_PORT_J, 11)
#define GPIO_SHIELD_D10 GPIO(GPIO_PORT_J, 12)
#define GPIO_SHIELD_D11 GPIO(GPIO_PORT_J, 13)
#define GPIO_SHIELD_D12 GPIO(GPIO_PORT_J, 14)
#define GPIO_SHIELD_D13 GPIO(GPIO_PORT_J, 15)

#define GPIO_SHIELD_ADC0 GPIO(GPIO_PORT_F, 6)
#define GPIO_SHIELD_ADC1 GPIO(GPIO_PORT_F, 10)
#define GPIO_SHIELD_ADC2 GPIO(GPIO_PORT_A, 3)
#define GPIO_SHIELD_ADC3 GPIO(GPIO_PORT_A, 5)
#define GPIO_SHIELD_ADC4 GPIO(GPIO_PORT_A, 6)
#define GPIO_SHIELD_ADC5 GPIO(GPIO_PORT_B, 0)

#define GPIO_SW100 GPIO(GPIO_PORT_J, 12)
#define GPIO_SW101 GPIO(GPIO_PORT_J, 13)
#define GPIO_SW102 GPIO(GPIO_PORT_J, 14)
#define GPIO_SW103 GPIO(GPIO_PORT_J, 15)

/**
 *  Definitions for sensor bus signals. Includes
 *   nrf51, accelerometer, and gyroscope
 */

#define __HAL_SENSOR_BUS_GPIO_CLK_ENABLE() \
            __HAL_RCC_GPIOK_CLK_ENABLE(); \
            __HAL_RCC_GPIOF_CLK_ENABLE()

#define GPIO_NRF_CS         GPIO(GPIO_PORT_K, 0)
#define GPIO_NRF_INT        GPIO(GPIO_PORT_K, 1)
#define GPIO_GYRO_nCS       GPIO(GPIO_PORT_K, 4)
#define GPIO_GYRO_INT       GPIO(GPIO_PORT_K, 5)
#define GPIO_ACC_nCS        GPIO(GPIO_PORT_K, 2)
#define GPIO_ACC_INT        GPIO(GPIO_PORT_K, 3)
#define GPIO_SPI5_SCK       GPIO(GPIO_PORT_F, 7)
#define GPIO_SPI5_MISO      GPIO(GPIO_PORT_F, 8)
#define GPIO_SPI5_MOSI      GPIO(GPIO_PORT_F, 9)



#endif
