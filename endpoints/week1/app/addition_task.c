#include "addition_task.h"
#include "input.h"
#include "addition.h"
#include <stdio.h>

int task1(void) {
    long number = 0;
    long number1 = 0;

    printf("number1 :");
    fflush(stdout);
    int out = read_long(&number);
    printf("number2 : ");
    fflush(stdout);
    int out2 = read_long(&number1);

    if (out != 0 || out2 != 0) {
            printf("TOO LONG or INVALID INPUT!\n");
            return -1;
        }

    if (number < 0 || number > 65535 || number1 < 0 || number1 > 65535) {
        printf("Numbers have to be between 0 - 65535!\n");
        return -1;
    }

    int32_t result = basic_addition((uint16_t)number, (uint16_t)number1);
    if (result < 0) {
        return -1;
    }
    printf("%ld\n", (long)result);

    return 0;
}
