/*
 * task3.c
 *
 *  Created on: Oct 17, 2026
 *      Author: flugel
 */
#include "calculation/common_types.h"

int task3(void) {

	long number = 0;

	printf("number :");
	int16_t out = read_long(&number);

	if (out != 0) {
		printf("TOO LONG or INVALID INPUT!\n");
		return -1;
	}

	uint32_t outreal = type2_addition(number);
	printf("%u\n", outreal);

	return 0;
}
