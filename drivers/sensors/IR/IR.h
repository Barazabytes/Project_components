/**
 * @file IR.h
 * @author Said Baraza (instagram: @baraza_rs)
 * @brief IR sensor driver interface.
 * @version 0.1
 * @date 2026-09-06
 * 
 * @copyright Copyright (c) 2026
 * 
 */


#pragma once
#include <stdint.h>

class IR {
private:
    uint8_t PIN;
    bool    OBSTACLE_DETECTED;

public:
    IR(uint8_t pin);
    void init();
    bool is_obstacle_detected();
};
