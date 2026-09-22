/**
 * @file oled.h
 * @author Said Baraza (instagram.com/barazabytes)
 * @brief Oled driver header file.
 * @version 0.1
 * @date 2026-09-22
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#pragma once
#include <stdint.h>

class OLED{
private:
    uint8_t SDA_PIN;
    uint8_t SCL_PIN;

public:
    OLED(uint8_t SDA_PIN, uint8_t SCL_PIN);
    void init();
    void clear_display();
    void print_ln(const char *statement);
    void set_cursor(uint16_t row, uint16_t column);
    void oled_display();
};