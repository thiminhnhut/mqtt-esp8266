#include "ControlLoad.h"

ControlLoad::ControlLoad(uint8_t pin, uint8_t active) {
    _pin = pin;
    _active = active;
    pinMode(pin, OUTPUT);
}

void ControlLoad::on() {
    digitalWrite(_pin, _active);
}

void ControlLoad::off() {
    digitalWrite(_pin, !_active);
}
