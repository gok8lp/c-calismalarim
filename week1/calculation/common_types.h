/*
 * common_types.h
 *
 *  Created on: Oct 16, 2026
 *      Author: flugel
 */

#ifndef CALCULATION_COMMON_TYPES_H_
#define CALCULATION_COMMON_TYPES_H_

#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>
#include <float.h>

typedef enum {
	STATUS_OK = 0,
	STATUS_ERROR,
	STATUS_TIMEPUT
} Status_t;

int task1(void);
int task2(void);
int task3(void);
int task4(void);

uint16_t basic_addition(uint16_t, uint16_t);
int16_t temp(int16_t inputT);
uint16_t basic_addition(uint16_t firstN, uint16_t secondN);
uint32_t type2_addition(uint32_t n);
void check_parity_and_prime(uint32_t n);
//int input(long *out);
int read_long(long *out);

#endif /* CALCULATION_COMMON_TYPES_H_ */
