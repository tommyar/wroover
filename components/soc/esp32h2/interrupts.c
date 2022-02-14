// Copyright 2020 Espressif Systems (Shanghai) PTE LTD
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "soc/interrupts.h"

const char *const esp_isr_names[ETS_MAX_INTR_SOURCE] = {
    [0] = "WIFI_MAC",
    [1] = "WIFI_NMI",
    [2] = "WIFI_PWR",
    [3] = "WIFI_BB",
    [4] = "BT_MAC",
    [5] = "BT_BB",
    [6] = "BT_BB_NMI",
    [7] = "RWBT",
    [8] = "RWBLE",
    [9] = "RWBT_NMI",
    [10] = "RWBLE_NMI",
    [11] = "I2C",
    [12] = "SLC0",
    [13] = "SLC1",
    [14] = "APB_CTRL",
    [15] = "UHCI0",
    [16] = "GPIO",
    [17] = "GPIO_NMI",
    [18] = "SPI1",
    [19] = "SPI2",
    [20] = "I2S1",
    [21] = "UART0",
    [22] = "UART1",
    [23] = "LEDC",
    [24] = "EFUSE",
    [25] = "CAN",
    [26] = "USB",
    [27] = "RTC_CORE",
    [28] = "RMT",
    [29] = "I2C_EXT0",
    [30] = "TIMER1",
    [31] = "TIMER2",
    [32] = "TG0_T0_LEVEL",
    [33] = "TG0_WDT_LEVEL",
    [34] = "TG1_T0_LEVEL",
    [35] = "TG1_WDT_LEVEL",
    [36] = "CACHE_IA",
    [37] = "SYSTIMER_TARGET0_EDGE",
    [38] = "SYSTIMER_TARGET1_EDGE",
    [39] = "SYSTIMER_TARGET2_EDGE",
    [40] = "SPI_MEM_REJECT_CACHE",
    [41] = "ICACHE_PRELOAD0",
    [42] = "ICACHE_SYNC0",
    [43] = "APB_ADC",
    [44] = "DMA_CH0",
    [45] = "DMA_CH1",
    [46] = "DMA_CH2",
    [47] = "RSA",
    [48] = "AES",
    [49] = "SHA",
    [50] = "ETS_FROM_CPU_INTR0",
    [51] = "ETS_FROM_CPU_INTR1",
    [52] = "ETS_FROM_CPU_INTR2",
    [53] = "ETS_FROM_CPU_INTR3",
    [54] = "ETS_ASSIST_DEBUG",
    [55] = "ETS_DMA_APBPERI_PMS",
    [56] = "ETS_CORE0_IRAM0_PMS",
    [57] = "ETS_CORE0_DRAM0_PMS",
    [58] = "ETS_CORE0_PIF_PMS",
    [59] = "ETS_CORE0_PIF_PMS_SIZE",
    [60] = "ETS_BAK_PMS_VIOLATE",
    [61] = "ETS_CACHE_CORE0_ACS",
};
