/**
 * @file IR.cpp
 * @author Said Baraza (instagram: @baraza_rs)
 * @brief Implementation of the IR sensor class
 * @version 0.1
 * @date 2026-09-06
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#include <Arduino.h>
#include "IR.h"

IR::IR(uint8_t pin) : PIN(pin), OBSTACLE_DETECTED(false) {}

void IR::init() {
    pinMode(PIN, INPUT);
    Serial.printf("IR configured: GPIO: %d \n", PIN);
    delay(200);
}

bool IR::is_obstacle_detected() {
    if(digitalRead(PIN) == LOW)
        OBSTACLE_DETECTED = true;
    else
        OBSTACLE_DETECTED = false;
    
    return OBSTACLE_DETECTED;
}