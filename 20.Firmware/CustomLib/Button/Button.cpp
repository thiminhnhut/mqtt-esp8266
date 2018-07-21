#include "Button.h"

Button::Button(uint8_t pin, uint8_t status) {
    _pin = pin;
    _status = status;
    pinMode(_pin, INPUT);
}

bool Button::get() {
    if (digitalRead(_pin) == _status) {
        delay(20);
        while (digitalRead(_pin) == _status) {
            ;
        }
        return true;
    } else {
        return false;
    }
}
