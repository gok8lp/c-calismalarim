/*
 * common_types.h
 *
 *  Created on: Oct 16, 2026
 *      Author: flugel
 */

#ifndef CALCULATION_COMMON_TYPES_H_
#define CALCULATION_COMMON_TYPES_H_

int input(long);
int task1(void);
int task2(void);
int task3(void);

typedef enum {
	STATUS_OK = 0,
	STATUS_ERROR,
	STATUS_TIMEPUT
} Status_t;

#endif /* CALCULATION_COMMON_TYPES_H_ */
