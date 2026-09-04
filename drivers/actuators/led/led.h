/**
 * @file led.h
 * @author Said Baraza (barazars45@gmail.com)
 * @brief The driver definition.
 * @version 0.1
 * @date 2026-09-04
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#pragma once
#include <stdint.h>

class Led {
private:
    uint8_t PIN;
    bool    LED_STATE;

public:
    explicit Led(uint8_t pin);
    void led_init   ();
    void led_on     ();
    void led_off    ();
    void led_toggle ();
};