/*
 * type2_addition.c
 *
 *  Created on: Oct 17, 2026
 *      Author: flugel
 */
#include "common_types.h"

uint32_t type2_addition(uint32_t n){
	uint32_t result = 0;

	for(int i = 1; i <= n; i++){
		result += i;

	}
	if(result <= 100000){
		return result;
	}
	else{
		printf("---it's bigger than 100k---");
		return 1;
	}
	return 0;
}

