#ifndef Configuration_h
#define Configuration_h

#include <Arduino.h>

#define __SSID_WIFI__ "cdttech.vn"
#define __PSK_WIFI__ "cdt12345"

#define __MQTT_SERVER__ "192.168.1.4"
#define __MQTT_PORT__ 1883

#define __ACTIVE_LED__ HIGH
#define __ACTIVE_BUTTON__ LOW

#define __ID_ESP1__ "ESP1"
#define __ESP1_SUB__ "led1"
#define __ESP1_PUB__ "led2"

#define __ID_ESP2__ "ESP2"
#define __ESP2_SUB__ "led2"
#define __ESP2_PUB__ "led1"

#define __PACKET_ON__ '1'
#define __PACKET_OFF__ '0'

#define __BAUD_RATE__ 115200

#endif
