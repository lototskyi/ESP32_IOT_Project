/*
 * rgb_ws2812.h
 *
 *  Created on: 28 квіт. 2025 р.
 *      Author: olexandr
 */

#ifndef MAIN_RGB_WS2812_H_
#define MAIN_RGB_WS2812_H_

#define LED_PIN			8

void configure_led(void);
void rgb_led_wifi_app_started(void);
void rgb_led_http_server_has_started(void);
void rgb_led_wifi_connected(void);

#endif /* MAIN_RGB_WS2812_H_ */
