#ifndef GLOBALS_H
#define GLOBALS_H

#define delay_time 5000
#define delay_time_2 2000

#define PIR_PIN 18
#define MY_SCL 11
#define MY_SDA 12
// include libraries
#include <Wire.h>
#include <WiFi.h>
#include <DHT20.h>

#include <PubSubClient.h>

///
#include "../src/connect/TaskWifi.h"
#include "../src/connect/TaskMQTT.h"

#include "../src/device/TaskDHT20.h"
#include "../src/device/TaskPIR.h"
#endif