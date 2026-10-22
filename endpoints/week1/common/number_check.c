#include "number_check.h"
#include <stdio.h>
#include <stdbool.h>

void check_parity_and_prime(uint32_t n) {
    if (n % 2 == 0) {
        printf("Sayi (%lu) çifttir.\n", (unsigned long)n);
    } else {
        printf("Sayi (%lu) tekdir.\n", (unsigned long)n);
    }

    if (n < 2) {
        printf("Sayi (%lu) asal değildir.\n", (unsigned long)n);
        return;
    }

    if (n == 2) {
        printf("Sayi (2) asaldir.\n");
        return;
    }

    if (n % 2 == 0) {
        printf("Sayi (%lu) asal değildir.\n", (unsigned long)n);
        return;
    }

    bool is_prime = true;
    for (uint32_t i = 3; i <= n / i; i += 2) {
        if (n % i == 0) {
            is_prime = false;
            break;
        }
    }

    if (is_prime) {
        printf("Sayi (%lu) asaldir.\n", (unsigned long)n);
    } else {
        printf("Sayi (%lu) asal değildir.\n", (unsigned long)n);
    }
}
