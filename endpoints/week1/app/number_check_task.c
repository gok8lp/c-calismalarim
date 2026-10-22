#include "number_check_task.h"
#include "input.h"
#include "number_check.h"
#include <stdio.h>

int task4(void) {
    long number = 0;

    printf("Bir pozitif sayi girin: ");
    fflush(stdout);
    int out = read_long(&number);

    if (out != 0) {
        printf("Gecersiz giris yapildi!\n");
        return -1;
    }

    if (number < 0 || (unsigned long)number > UINT32_MAX) {
        printf("Sayi 0 ile 4294967295 arasinda olmali!\n");
        return -1;
    }

    check_parity_and_prime((uint32_t)number);

    return 0;
}
