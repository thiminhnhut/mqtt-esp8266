#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <PubSubClient.h>
#include "Configuration.h"
#include "WiFiSupport.h"
#include "ControlLoad.h"
#include "Button.h"

#define __LED1_PIN__ 5
#define __BUTTON1_PIN__ 4

WiFiSupport MQTT_WiFiSupport;
WiFiClient espClient;
PubSubClient client(espClient);
ControlLoad MQTT_ControlLoad(__LED1_PIN__, __ACTIVE_LED__);
Button MQTT_Button(__BUTTON1_PIN__, __ACTIVE_BUTTON__);

void reconnect();
void callback(char* topic, byte* payload, unsigned int length);

bool stateLed = false;

void setup() {
    Serial.begin(__BAUD_RATE__);
    MQTT_WiFiSupport.begin(__SSID_WIFI__, __PSK_WIFI__);
    client.setServer(__MQTT_SERVER__, __MQTT_PORT__);
    client.setCallback(callback);
}

void loop() {
    if (!client.connected()) {
      reconnect();
    }
    client.loop();

    if (MQTT_Button.get()) {
        stateLed = !stateLed;
        client.publish(__ESP1_PUB__, String(stateLed).c_str());
        delay(100);
    }
}

void reconnect() {
    while (!client.connected()) {
        Serial.print("Attempting MQTT connection...");
        if (client.connect(__ID_ESP1__)) {
            Serial.println("connected");
            client.subscribe(__ESP1_SUB__);
        } else {
            Serial.print("failed, rc=");
            Serial.print(client.state());
            Serial.println(" try again in 5 seconds");
            delay(5000);
        }
    }
}

void callback(char* topic, byte* payload, unsigned int length) {
    Serial.print("Message arrived [");
    Serial.print(topic);
    Serial.print("] ");
    for (unsigned int i = 0; i < length; i++) {
      Serial.print((char)payload[i]);
    }
    Serial.println();

    char status = payload[0];
    if (status == __PACKET_ON__) {
        MQTT_ControlLoad.on();
    } else if (status == __PACKET_OFF__) {
        MQTT_ControlLoad.off();
    }
}
