/*
 * TSDZ2 wireless firmware
 *
 * Copyright (C) Casainho, 2020
 *
 * Released under the GPL License, Version 3
 */

#include <stdint.h>

typedef struct
{
    uint8_t temperature_state;
    uint8_t travel_mode_state;
    uint8_t system_state;
    uint8_t gear_state;
    uint8_t error_message;
    uint16_t lev_speed;
} ant_lev_page_1_data_t;