/*
 * task-2.c
 *
 *  Created on: Oct 17, 2026
 *      Author: flugel
 */
#include "calculation/common_types.h"
#include "main.h"

int task2(void) {

	long number = 0;

	printf("number :");
	int16_t out = read_long(&number);

	if (out != 0) {
		printf("TOO LONG or INVALID INPUT!\n");
		return -1;
	}

	int16_t outreal = temp(number);
	printf("%d\n", outreal);

	return 0;
}

