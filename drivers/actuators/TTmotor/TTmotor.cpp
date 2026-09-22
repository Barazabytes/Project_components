/**
 * @file TTmotor.cpp
 * @author Said Baraza (instagram.com/barazabytes)
 * @brief TT-motor driver implementation.
 * @version 0.1
 * @date 2026-09-22
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#include <TTmotor.h>
#include <Arduino.h>

TTmotor::TTmotor(uint8_t pin1, uint8_t pin2) : PIN1(pin1), PIN2(pin2) {}

void TTmotor::init() {
  pinMode(PIN1, OUTPUT);
  pinMode(PIN2, OUTPUT);

  Serial.println("TT motor Online");
}

void TTmotor::move() {
    digitalWrite(PIN1, HIGH);
    digitalWrite(PIN2, LOW);
    Serial.println("Motor is Running");
}

void TTmotor::stop() {
    digitalWrite(PIN1, HIGH);
    digitalWrite(PIN2, HIGH);
    Serial.println("Motor has been stopped");
}