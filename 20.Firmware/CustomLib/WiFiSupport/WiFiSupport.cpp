#include "WiFiSupport.h"
#include <ESP8266WiFi.h>

WiFiSupport::WiFiSupport() {

}

void WiFiSupport::begin(const char* ssid, const char* psk) {
    WiFi.mode(WIFI_STA);
    WiFi.begin(ssid, psk);

    while (WiFi.status() != WL_CONNECTED) {
      delay(500);
      Serial.print(".");
    }

    Serial.println("\nWiFi connected");
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());
}
