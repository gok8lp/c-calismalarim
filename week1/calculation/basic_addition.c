/*
 * basic_addition.c
 *
 *  Created on: Oct 16, 2026
 *      Author: flugel
 */

#include "common_types.h"

uint16_t basic_addition(uint16_t firstN, uint16_t secondN){
	uint32_t result = 0; //16da overflow
	result = firstN + secondN;

	if(result > 65535){
		printf("---Wrong number, It's higher than 65535!---");
		return 1;
	}

	return (uint16_t)result;
}
