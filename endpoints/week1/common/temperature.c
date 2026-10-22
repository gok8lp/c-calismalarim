#include "temperature.h"
#include <stdio.h>

int classify_temperature(long temperature) {
    if (temperature < -40 || temperature > 125) {
        printf("---sensör hatası!---\n");
        return -1;
    }
    else if (temperature < 0) {
        printf("---donma---\n");
        return 0;
    }
    else if (temperature <= 40) {
        printf("---normal---\n");
        return 0;
    }
    else {
        printf("---yüksek---\n");
        return 0;
    }
}
