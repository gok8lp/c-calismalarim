#include "addition.h"
#include <stdio.h>

int32_t basic_addition(uint16_t first_number, uint16_t second_number) {
    uint32_t result = (uint32_t)first_number + second_number;

    if (result > UINT16_MAX) {
        printf("Toplam 65535 sinirini asiyor!\n");
        return -1;
    }
    return (int32_t)result;
}
