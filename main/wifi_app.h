/*
 * wifi_app.h
 *
 *  Created on: 30 квіт. 2025 р.
 *      Author: olexandr
 */

#ifndef MAIN_WIFI_APP_H_
#define MAIN_WIFI_APP_H_

#include "esp_netif.h"
#include "esp_netif_types.h"
#include "portmacro.h"

// WIFI application settings
#define WIFI_AP_SSID				"ESP32_AP"
#define WIFI_AP_PASSWORD			"password"
#define WIFI_AP_CHANNEL				1
#define WIFI_AP_SSID_HIDDEN			0
#define WIFI_AP_MAX_CONNECTIONS		5
#define WIFI_AP_BEACON_INTERVAL		100
#define WIFI_AP_IP					"192.168.0.1"
#define WIFI_AP_GATEWAY				"192.168.0.1"
#define WIFI_AP_NETMASK				"255.255.255.0"
#define WIFI_AP_BANDWIDTH			WIFI_BW_HT20
#define WIFI_STA_POWER_SAVE			WIFI_PS_NONE
#define MAX_SSID_LENGTH				32				// IEEE standard maximum
#define MAX_PASSWORD_LENGTH			64				// IEEE standard maximum
#define MAX_CONNECTION_RETRIES		5

// netif object for the Station and Access Point
extern esp_netif_t* esp_netif_sta;
extern esp_netif_t* esp_netif_ap;

/** 
 * Message IDs for the WIFI application task
 * @note Expand this based on your application requirements
 */
typedef enum wifi_app_message
{
	WIFI_APP_MSG_START_HTTP_SERVER = 0,
	WIFI_APP_MSG_CONNECTING_FROM_HTTP_SERVER,
	WIFI_APP_MSG_STA_CONNECTED_GOT_IP,
	
} wifi_app_message_e;

/** 
 * Structure for the message queue
 * @note Expand this based on your application requirements
 */
typedef struct wifi_app_queue_message
{
	wifi_app_message_e msgID;
} wifi_app_queue_message_t;

/** 
 * Sends a message to the queue
 * @param msgID message ID from the wifi_app_message_e
 * @return pdTRUE if an item was successfully sent to the queue, otherwise pdFALSE
 * @note Expand the parameter list based on your requirements e.g. how you've expanded the wifi_app_queue_message_t
 */
 BaseType_t wifi_app_send_message(wifi_app_message_e msgID);

/** 
 * Starts the WIFI RTOS task
 */
 void wifi_app_start(void);

#endif /* MAIN_WIFI_APP_H_ */
