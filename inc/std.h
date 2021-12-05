#include "stm32_base.h"
#include "bit.h"
#pragma once

void float2digits(float number, uint8_t *dig, uint8_t precision, uint8_t digits);
void float2char(float number, char *data, int prec);
void float2uint8(float *number, uint8_t *buf);

float maxmin(float in, float max, float min);
float deadzone(float in, float up, float low);
