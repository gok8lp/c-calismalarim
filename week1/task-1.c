/*
 * task-1.c
 *
 *  Created on: Oct 17, 2026
 *      Author: flugel
 */

#include "calculation/common_types.h"
#include "main.h"

int task1(){
	long number = 0;
	long number1 = 0;

	printf("number1 :");
	int16_t out = read_long(&number);
	printf("number2 : ");
	int16_t out2 = read_long(&number1);

	if (out != 0 || out2 != 0) {
		    printf("TOO LONG or INVALID INPUT!\n");
		    return -1;
		}

	if (number < 0 || number > 65535 || number1 < 0 || number1 > 65535) {
	    printf("Numbers have to be between 0 - 65535!\n");
	    return -1;
	}

	int16_t outreal = basic_addition(number, number1);
	printf("%d\n", outreal);

	return 0;
}
