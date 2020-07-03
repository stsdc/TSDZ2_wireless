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
    uint32_t odometer;
    uint16_t remaining_range;
    uint16_t lev_speed;
} ant_lev_page_2_data_t;