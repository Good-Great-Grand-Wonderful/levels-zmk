/*
 * Copyright (c) 2025 Vincent Franco
 * SPDX-License-Identifier: MIT
 */

#include <zephyr/device.h>
#include <zephyr/devicetree.h>
#include <zephyr/drivers/gpio.h>
#include <zephyr/init.h>
#include <zephyr/kernel.h>
#include <zephyr/sys/sys_io.h>

static int pinmux_nrfmicro_init(void) {
  const struct device *p0 = DEVICE_DT_GET(DT_NODELABEL(gpio0));
  return 0;
}

SYS_INIT(pinmux_nrfmicro_init, APPLICATION, CONFIG_APPLICATION_INIT_PRIORITY);
