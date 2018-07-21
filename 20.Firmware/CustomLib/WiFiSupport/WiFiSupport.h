#ifndef WiFiSupport_h
#define WiFiSupport_h
#include <Arduino.h>

class WiFiSupport {
public:
    WiFiSupport();
    void begin(const char* ssid, const char* psk);
};
#endif
