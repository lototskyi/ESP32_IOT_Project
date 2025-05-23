/*
 * tasks_common.h
 *
 *  Created on: 30 квіт. 2025 р.
 *      Author: olexandr
 */

#ifndef MAIN_TASKS_COMMON_H_
#define MAIN_TASKS_COMMON_H_

// WIFI application task
#define WIFI_APP_TASK_STACK_SIZE			4096
#define WIFI_APP_TASK_PRIORITY				5
#define WIFI_APP_TASK_CORE_ID				0

// HTTP Server task
#define HTTP_SERVER_TASK_STACK_SIZE			8192
#define HTTP_SERVER_TASK_PRIORITY			4
#define HTTP_SERVER_TASK_CORE_ID			0

// HTTP Server Monitor task
#define HTTP_SERVER_MONITOR_STACK_SIZE		4096
#define HTTP_SERVER_MONITOR_PRIORITY		3
#define HTTP_SEREVR_MONITOR_CORE_ID			0

// DHT22 Sensor task
#define DHT22_TASK_STACK_SIZE				4096
#define DHT22_TASK_PRIORITY					5
#define DHT22_TASK_CORE_ID					1

#endif /* MAIN_TASKS_COMMON_H_ */
