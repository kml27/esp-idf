/*
 * SPDX-FileCopyrightText: 2024-2025 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "soc/twai_periph.h"
#include "soc/gpio_sig_map.h"

const twai_signal_conn_t twai_periph_signals[SOC_TWAI_CONTROLLER_NUM] = {
    [0] = {
        .module_name = "TWAI0",
        .irq_id = ETS_TWAI0_INTR_SOURCE,
        .timer_irq_id = ETS_TWAI0_TIMER_INTR_SOURCE,
        .tx_sig = TWAI0_TX_IDX,
        .rx_sig = TWAI0_RX_IDX,
        .bus_off_sig = TWAI0_BUS_OFF_ON_IDX,
        .clk_out_sig = TWAI0_CLKOUT_IDX,
        .stand_by_sig = TWAI0_STANDBY_IDX,
    },
    [1] = {
        .module_name = "TWAI1",
        .irq_id = ETS_TWAI1_INTR_SOURCE,
        .timer_irq_id = ETS_TWAI1_TIMER_INTR_SOURCE,
        .tx_sig = TWAI1_TX_IDX,
        .rx_sig = TWAI1_RX_IDX,
        .bus_off_sig = TWAI1_BUS_OFF_ON_IDX,
        .clk_out_sig = TWAI1_CLKOUT_IDX,
        .stand_by_sig = TWAI1_STANDBY_IDX,
    },
};
