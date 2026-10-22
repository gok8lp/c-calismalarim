#include "temperature_task.h"
#include "input.h"
#include "temperature.h"
#include <stdio.h>

int task2(void) {

    long number = 0;

    printf("number :");
    fflush(stdout);
    int out = read_long(&number);

    if (out != 0) {
        printf("TOO LONG or INVALID INPUT!\n");
        return -1;
    }

    return classify_temperature(number);

}
