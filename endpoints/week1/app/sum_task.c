#include "sum_task.h"
#include "input.h"
#include "sum_to_n.h"
#include <stdio.h>

int task3(void) {

    long number = 0;

    printf("number :");
    fflush(stdout);
    int out = read_long(&number);

    if (out != 0) {
        printf("TOO LONG or INVALID INPUT!\n");
        return -1;
    }

    if (number < 1 || number > 100000) {
        printf("N 1 ile 100000 arasinda olmali!\n");
        return -1;
    }

    uint32_t result = sum_to_n((uint32_t)number);
    if (result == 0) {
        return -1;
    }
    printf("%lu\n", (unsigned long)result);

    return 0;
}
