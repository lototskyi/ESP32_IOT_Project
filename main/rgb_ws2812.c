/*
 * rgb_ws2812.c
 *
 *  Created on: 28 квіт. 2025 р.
 *      Author: olexandr
 */

#include "led_strip.h"
#include "rgb_ws2812.h"

static led_strip_handle_t led_strip;

void configure_led(void)
{
    /* LED strip initialization with the GPIO and pixels number*/
    led_strip_config_t strip_config = {
        .strip_gpio_num = LED_PIN,
        .max_leds = 1, // at least one LED on board
    };

    led_strip_rmt_config_t rmt_config = {
        .resolution_hz = 10 * 1000 * 1000, // 10MHz
        .flags.with_dma = false,
    };
    ESP_ERROR_CHECK(led_strip_new_rmt_device(&strip_config, &rmt_config, &led_strip));

    /* Set all LED off to clear all pixels */
    led_strip_clear(led_strip);
}

void rgb_led_wifi_app_started(void)
{

	led_strip_set_pixel(led_strip, 0, 10, 0, 0);
    /* Refresh the strip to send data */
    led_strip_refresh(led_strip);
}

void rgb_led_http_server_has_started(void)
{
	led_strip_set_pixel(led_strip, 0, 0, 10, 0);
    /* Refresh the strip to send data */
    led_strip_refresh(led_strip);
}

void rgb_led_wifi_connected(void)
{
	led_strip_set_pixel(led_strip, 0, 10, 10, 0);
	/* Refresh the strip to send data */
	led_strip_refresh(led_strip);
}