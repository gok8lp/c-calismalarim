/*
 * temp.c
 *
 *  Created on: Oct 17, 2026
 *      Author: flugel
 */
#include "common_types.h"

int16_t temp(int16_t inputT) {
    if (inputT < -40 || inputT > 125) {
        printf("---sensör hatası!---\n");
        return -1;
    }
    else if (inputT < 0) {
        printf("---donma---\n");
        return 0;
    }
    else if (inputT <= 40) {
        printf("---normal---\n");
        return 0;
    }
    else {
        printf("---yüksek---\n");
        return 0;
    }
}
