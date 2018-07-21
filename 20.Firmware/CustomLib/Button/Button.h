#ifndef Button_h
#define Button_h
#include <Arduino.h>

class Button {
private:
    uint8_t _pin;
    uint8_t _status;
public:
    Button(uint8_t pin, uint8_t status);
    bool get();
};
#endif
