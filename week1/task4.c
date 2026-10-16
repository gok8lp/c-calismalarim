/*
 * tasj3.c
 *
 *  Created on: Oct 17, 2026
 *      Author: flugel
 */
#include "calculation/common_types.h"

int task4(void) {
    long number = 0;

    printf("Bir pozitif sayi girin: ");
    int16_t out = read_long(&number);

    if (out != 0) {
        printf("Gecersiz giris yapildi!\n");
        return -1;
    }

    if (number < 0) {
        printf("Lutfen pozitif bir sayi girin!\n");
        return -1;
    }

    check_parity_and_prime((uint32_t)number);

    return 0;
}

