/*
 * comparator.c
 *
 *  Created on: Oct 17, 2026
 *      Author: flugel
 */
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

void check_parity_and_prime(uint32_t n) {
    if (n % 2 == 0) {
        printf("Sayi (%u) çifttir.\n", n);
    } else {
        printf("Sayi (%u) tekdir.\n", n);
    }

    if (n < 2) {
        printf("Sayi (%u) asal değildir.\n", n);
        return;
    }

    if (n == 2) {
        printf("Sayi (2) asaldir.\n");
        return;
    }

    if (n % 2 == 0) {
        printf("Sayi (%u) asal değildir.\n", n);
        return;
    }

    bool is_prime = true;
    for (uint32_t i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            is_prime = false;
            break;
        }
    }

    if (is_prime) {
        printf("Sayi (%u) asaldir.\n", n);
    } else {
        printf("Sayi (%u) asal değildir.\n", n);
    }
}

