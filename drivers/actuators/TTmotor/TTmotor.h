/**
 * @file TTmotor.h
 * @author Said Baraza (instagram.com/barazabytes)
 * @brief The TT-motor driver header file
 * @version 0.1
 * @date 2026-09-22
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#pragma once
#include <stdint.h>

class TTmotor {
private:
    uint8_t PIN1;
    uint8_t PIN2;

public:
    TTmotor(uint8_t pin1, uint8_t pin2);
    void init();
    void move();
    void stop();
};