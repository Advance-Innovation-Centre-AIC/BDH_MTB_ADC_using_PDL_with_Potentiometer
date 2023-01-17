/*******************************************************************************
* File Name: cycfg_peripherals.h
*
* Description:
* Peripheral Hardware Block configuration
* This file was automatically generated and should not be modified.
* Configurator Backend 3.0.0
* device-db 4.0.3.3123
* mtb-pdl-cat1 3.2.0.20064
*
********************************************************************************
* Copyright 2023 Cypress Semiconductor Corporation (an Infineon company) or
* an affiliate of Cypress Semiconductor Corporation.
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#if !defined(CYCFG_PERIPHERALS_H)
#define CYCFG_PERIPHERALS_H

#include "cycfg_notices.h"
#include "cy_sysclk.h"
#include "cy_csd.h"
#include "cy_sysanalog.h"
#include "cy_sar.h"
#include "cycfg_routing.h"
#if defined (CY_USING_HAL)
    #include "cyhal_hwmgr.h"
#endif //defined (CY_USING_HAL)
#include "cy_scb_uart.h"

#if defined(__cplusplus)
extern "C" {
#endif

#define CYBSP_CSD_ENABLED 1U
#define CY_CAPSENSE_CORE 4u
#define CY_CAPSENSE_CPU_CLK 100000000u
#define CY_CAPSENSE_PERI_CLK 100000000u
#define CY_CAPSENSE_VDDA_MV 3300u
#define CY_CAPSENSE_PERI_DIV_TYPE CY_SYSCLK_DIV_8_BIT
#define CY_CAPSENSE_PERI_DIV_INDEX 0u
#define Cmod_PORT GPIO_PRT7
#define CintA_PORT GPIO_PRT7
#define CintB_PORT GPIO_PRT7
#define Button0_Rx0_PORT GPIO_PRT1
#define Button0_Tx_PORT GPIO_PRT8
#define Button1_Rx0_PORT GPIO_PRT1
#define Button1_Tx_PORT GPIO_PRT8
#define LinearSlider0_Sns0_PORT GPIO_PRT8
#define LinearSlider0_Sns1_PORT GPIO_PRT8
#define LinearSlider0_Sns2_PORT GPIO_PRT8
#define LinearSlider0_Sns3_PORT GPIO_PRT8
#define LinearSlider0_Sns4_PORT GPIO_PRT8
#define Cmod_PIN 7u
#define CintA_PIN 1u
#define CintB_PIN 2u
#define Button0_Rx0_PIN 0u
#define Button0_Tx_PIN 1u
#define Button1_Rx0_PIN 0u
#define Button1_Tx_PIN 2u
#define LinearSlider0_Sns0_PIN 3u
#define LinearSlider0_Sns1_PIN 4u
#define LinearSlider0_Sns2_PIN 5u
#define LinearSlider0_Sns3_PIN 6u
#define LinearSlider0_Sns4_PIN 7u
#define Cmod_PORT_NUM 7u
#define CintA_PORT_NUM 7u
#define CintB_PORT_NUM 7u
#define CYBSP_CSD_HW CSD0
#define CYBSP_CSD_IRQ csd_interrupt_IRQn
#define AREF_ENABLED 1U
#define ADC_ENABLED 1U
#define ADC_HW SAR
#define ADC_IRQ pass_interrupt_sar_IRQn
#define ADC_CTL ((uint32_t)CY_SAR_VREF_PWR_100 | (uint32_t)CY_SAR_VREF_SEL_VDDA | (uint32_t)CY_SAR_BYPASS_CAP_ENABLE | (uint32_t)CY_SAR_NEG_SEL_VREF | (uint32_t)CY_SAR_CTRL_NEGVREF_HW | (uint32_t)CY_SAR_CTRL_COMP_DLY_4 | (uint32_t)CY_SAR_COMP_PWR_100 | (uint32_t)CY_SAR_DEEPSLEEP_SARMUX_OFF | (uint32_t)CY_SAR_SARSEQ_SWITCH_ENABLE)
#define ADC_SAMPLE ((uint32_t)SAR_SAMPLE_CTRL_EOS_DSI_OUT_EN_Msk | (uint32_t)CY_SAR_RIGHT_ALIGN | (uint32_t)CY_SAR_DIFFERENTIAL_SIGNED | (uint32_t)CY_SAR_SINGLE_ENDED_SIGNED | (uint32_t)CY_SAR_AVG_CNT_2 | (uint32_t)CY_SAR_AVG_MODE_SEQUENTIAL_FIXED | (uint32_t)CY_SAR_TRIGGER_MODE_FW_ONLY)
#define ADC_CH0_CONFIG (((uint32_t)SAR0_VPLUS0_PORT << SAR_CHAN_CONFIG_POS_PORT_ADDR_Pos) | (uint32_t)(SAR0_VPLUS0_PIN << SAR_CHAN_CONFIG_POS_PIN_ADDR_Pos) | CY_SAR_CHAN_SINGLE_ENDED | CY_SAR_CHAN_AVG_DISABLE | (uint32_t)CY_SAR_CHAN_SAMPLE_TIME_0)
#define ADC_VREF_MV 3300UL
#define UART_ENABLED 1U
#define UART_HW SCB5
#define UART_IRQ scb_5_interrupt_IRQn

extern cy_stc_csd_context_t cy_csd_0_context;
extern const cy_stc_sysanalog_config_t AREF_config;
extern const cy_stc_sar_config_t ADC_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t ADC_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_scb_uart_config_t UART_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t UART_obj;
#endif //defined (CY_USING_HAL)

void init_cycfg_peripherals(void);
void reserve_cycfg_peripherals(void);

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_PERIPHERALS_H */
