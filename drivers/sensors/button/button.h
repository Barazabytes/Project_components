/**
 * @file button.h
 * @author said baraza (barazars45@gmail.com)
 * @brief The driver definition.
 * @version 0.1
 * @date 2026-09-05
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#pragma once
#include <stdint.h>

class Button {

private:
    uint8_t PIN;
    bool    BUTTON_PRESSED;
    bool    BUTTON_RELEASED;

public:
    Button(uint8_t pin);
    void init       ();
    bool isPressed  ();
    bool isReleased ();
};