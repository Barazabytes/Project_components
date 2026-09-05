/**
 * @file button.cpp
 * @author said baraza (barazars45@gmail.com)
 * @brief The driver implementation.
 * @version 0.1
 * @date 2026-09-05
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#include "button.h"
#include <Arduino.h>

Button::Button(uint8_t pin) : PIN(pin), BUTTON_PRESSED(false), BUTTON_RELEASED(false) {}

void Button::init() {
    pinMode(PIN, INPUT_PULLUP);
    Serial.print("Button configured: GPIO: ");
    Serial.println(PIN);
    delay(200);
}

bool Button::isPressed() {
    if(digitalRead(PIN) == LOW) {
        BUTTON_PRESSED = true;
        BUTTON_RELEASED = false;
        Serial.println("Button Pressed");
    }

    return BUTTON_PRESSED;
}

bool Button::isReleased() {
    if(BUTTON_PRESSED && digitalRead(PIN) == HIGH) {
        BUTTON_PRESSED  = false;
        BUTTON_RELEASED = true;
        Serial.println("Button Released");
    }

    return BUTTON_RELEASED;
}