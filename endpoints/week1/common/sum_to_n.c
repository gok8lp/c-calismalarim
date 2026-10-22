#include "sum_to_n.h"
#include <stdio.h>

uint32_t sum_to_n(uint32_t n) {
    uint32_t result = 0;

    if (n < 1 || n > 100000) {
        printf("N 1 ile 100000 arasinda olmali!\n");
        return 0;
    }

    for (uint32_t i = 1; i <= n; i++) {
        /* Toplamadan once uint32_t sinirini kontrol et. */
        if (result > UINT32_MAX - i) {
            printf("Toplam uint32_t sinirini asiyor!\n");
            return 0;
        }
        result += i;
    }
    return result;
}
