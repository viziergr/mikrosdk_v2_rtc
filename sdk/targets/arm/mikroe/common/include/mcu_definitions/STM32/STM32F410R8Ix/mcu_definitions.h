/****************************************************************************
**
** Copyright (C) 2023 MikroElektronika d.o.o.
** Contact: https://www.mikroe.com/contact
**
** This file is part of the mikroSDK package
**
** Commercial License Usage
**
** Licensees holding valid commercial NECTO compilers AI licenses may use this
** file in accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The MikroElektronika Company.
** For licensing terms and conditions see
** https://www.mikroe.com/legal/software-license-agreement.
** For further information use the contact form at
** https://www.mikroe.com/contact.
**
**
** GNU Lesser General Public License Usage
**
** Alternatively, this file may be used for
** non-commercial projects under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation: https://www.gnu.org/licenses/lgpl-3.0.html.
**
** The above copyright notice and this permission notice shall be
** included in all copies or substantial portions of the Software.
**
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
** OF MERCHANTABILITY, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED
** TO THE WARRANTIES FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
** IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
** DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT
** OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
** OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
**
****************************************************************************/
/*!
 * @file  mcu_definitions.h
 * @brief MCU specific pin and module definitions.
 */

#ifndef _MCU_DEFINITIONS_H_
#define _MCU_DEFINITIONS_H_

//ADC
#define ADC1_PA0_CH0
#define ADC1_PA1_CH1
#define ADC1_PA2_CH2
#define ADC1_PA3_CH3
#define ADC1_PA4_CH4
#define ADC1_PA5_CH5
#define ADC1_PA6_CH6
#define ADC1_PA7_CH7
#define ADC1_PB0_CH8
#define ADC1_PB1_CH9
#define ADC1_PC0_CH10
#define ADC1_PC1_CH11
#define ADC1_PC2_CH12
#define ADC1_PC3_CH13
#define ADC1_PC4_CH14
#define ADC1_PC5_CH15

#define ADC_MODULE_1 1

#define ADC_MODULE_COUNT 1
//EOF ADC

//I2C
#define I2C1_SCL_PB6_AF4
#define I2C1_SCL_PB8_AF4
#define I2C1_SDA_PB7_AF4
#define I2C1_SDA_PB9_AF4
#define I2C2_SCL_PB10_AF4
#define I2C2_SDA_PB11_AF4
#define I2C2_SDA_PB3_AF9
#define I2C2_SDA_PB9_AF9

#define I2C_MODULE_1 1
#define I2C_MODULE_2 2

#define I2C_MODULE_COUNT 2
//EOF I2C

//UART

//EOF UART

//USART
#define UART1_RX_PA10_AF7
#define UART1_RX_PB3_AF7
#define UART1_RX_PB7_AF7
#define UART1_TX_PA15_AF7
#define UART1_TX_PA9_AF7
#define UART1_TX_PB6_AF7
#define UART2_RX_PA3_AF7
#define UART2_TX_PA2_AF7
#define UART6_RX_PA12_AF8
#define UART6_RX_PC7_AF8
#define UART6_TX_PA11_AF8
#define UART6_TX_PC6_AF8

#define UART_MODULE_1 1
#define UART_MODULE_2 2
#define UART_MODULE_6 3

#define UART_MODULE_COUNT 3
//EOF USART

//SPI
#define SPI1_MISO_PA6_AF5
#define SPI1_MISO_PB4_AF5
#define SPI1_MOSI_PA7_AF5
#define SPI1_MOSI_PB5_AF5
#define SPI1_SCK_PA5_AF5
#define SPI1_SCK_PB3_AF5
#define SPI2_MISO_PB14_AF5
#define SPI2_MISO_PC2_AF5
#define SPI2_MOSI_PB15_AF5
#define SPI2_MOSI_PC3_AF5
#define SPI2_SCK_PB10_AF5
#define SPI2_SCK_PB13_AF5
#define SPI2_SCK_PC7_AF5
#define SPI5_MISO_PA12_AF6
#define SPI5_MOSI_PA10_AF6
#define SPI5_MOSI_PB8_AF6
#define SPI5_SCK_PB0_AF6

#define SPI_MODULE_1 1
#define SPI_MODULE_2 2
#define SPI_MODULE_5 3

#define SPI_MODULE_COUNT 3
//EOF SPI

//TIM
#define TIM1_BKIN_PA6_AF1
#define TIM1_BKIN_PB12_AF1
#define TIM1_CH1_PA8_AF1
#define TIM1_CH1N_PA7_AF1
#define TIM1_CH1N_PB13_AF1
#define TIM1_CH2_PA9_AF1
#define TIM1_CH2N_PB0_AF1
#define TIM1_CH2N_PB14_AF1
#define TIM1_CH3_PA10_AF1
#define TIM1_CH3N_PB1_AF1
#define TIM1_CH3N_PB15_AF1
#define TIM1_CH4_PA11_AF1
#define TIM1_ETR_PA12_AF1
#define TIM11_CH1_PB9_AF3
#define TIM11_CH1_PC12_AF3
#define TIM5_CH1_PA0_AF2
#define TIM5_CH1_PB12_AF2
#define TIM5_CH2_PA1_AF2
#define TIM5_CH2_PC10_AF2
#define TIM5_CH3_PA2_AF2
#define TIM5_CH3_PC11_AF2
#define TIM5_CH4_PA3_AF2
#define TIM5_CH4_PB11_AF2
#define TIM9_CH1_PA2_AF3
#define TIM9_CH1_PC4_AF3
#define TIM9_CH2_PA3_AF3
#define TIM9_CH2_PC5_AF3

#define TIM1_BUS 2
#define TIM11_BUS 2
#define TIM5_BUS 1
#define TIM9_BUS 2

#define TIM_MODULE_1 1
#define TIM_MODULE_11 4
#define TIM_MODULE_5 2
#define TIM_MODULE_9 3

#define TIM_MODULE_COUNT 4
//EOF TIM

//GPIO
#define __PH1_CN
#define __PH0_CN
#define __PC9_CN
#define __PC8_CN
#define __PC7_CN
#define __PC6_CN
#define __PC5_CN
#define __PC4_CN
#define __PC3_CN
#define __PC2_CN
#define __PC15_CN
#define __PC14_CN
#define __PC13_CN
#define __PC12_CN
#define __PC11_CN
#define __PC10_CN
#define __PC1_CN
#define __PC0_CN
#define __PB9_CN
#define __PB8_CN
#define __PB7_CN
#define __PB6_CN
#define __PB5_CN
#define __PB4_CN
#define __PB3_CN
#define __PB2_CN
#define __PB15_CN
#define __PB14_CN
#define __PB13_CN
#define __PB12_CN
#define __PB11_CN
#define __PB10_CN
#define __PB1_CN
#define __PB0_CN
#define __PA9_CN
#define __PA8_CN
#define __PA7_CN
#define __PA6_CN
#define __PA5_CN
#define __PA4_CN
#define __PA3_CN
#define __PA2_CN
#define __PA15_CN
#define __PA14_CN
#define __PA13_CN
#define __PA12_CN
#define __PA11_CN
#define __PA10_CN
#define __PA1_CN
#define __PA0_CN

#define __PORT_A_CN
#define __PORT_B_CN
#define __PORT_C_CN
#define __PORT_H_CN

#define PORT_SIZE (16)
#define PORT_COUNT (4)
//EOF GPIO

//IVT_TABLE
#define UART1_NVIC  53
#define UART2_NVIC  54
#define UART6_NVIC  87
//EOF IVT_TABLE


#endif // _MCU_DEFINITIONS_H_
// ------------------------------------------------------------------------- END