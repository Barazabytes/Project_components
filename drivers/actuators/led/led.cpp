/**
 * @file led.cpp
 * @author Said Baraza (barazars45@gmail.com)
 * @brief The driver implementation.
 * @version 0.11
 * @date 2026-09-05
 * 
 * @copyright Copyright (c) 2026
 * 
 */


#include <Arduino.h>
#include "led.h"
#include "esp_log.h"


// Instantiating the Led Class with respective gpio_pin
Led::Led(uint8_t led) : PIN(led), LED_STATE(false) {}

// LED initialization method
void Led::init() {
    pinMode(PIN, OUTPUT);
    Serial.print("Led Configured GPIO: ");
    Serial.println(PIN);
    delay(100);
}

void Led::led_on() {
    digitalWrite(PIN, HIGH);
    LED_STATE = true;
    Serial.println("Led HIGH");
}

void Led::led_off() {
    digitalWrite(PIN, LOW);
    LED_STATE = false;
    Serial.println("Led LOW");
}


void Led::led_toggle() {
    LED_STATE = !LED_STATE;
    digitalWrite(PIN, LED_STATE);
    Serial.println("Led Toggled");
}