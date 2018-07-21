#ifndef ControlLoad_h
#define ControlLoad_h
#include <Arduino.h>

class ControlLoad {
private:
    uint8_t _pin;
    uint8_t _active;
public:
    ControlLoad(uint8_t pin, uint8_t active);
    void on();
    void off();
};
#endif
