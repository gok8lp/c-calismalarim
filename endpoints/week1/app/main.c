#include <stdio.h>
#include <stdint.h>
#include "input.h"
#include "addition_task.h"
#include "temperature_task.h"
#include "sum_task.h"
#include "number_check_task.h"

int main(void) {
    long choice = 0;
    int status = 0;

    do {
        choice = -1;
        printf("\n=========================================\n");
        printf("                TASK MENU                \n");
        printf("=========================================\n");
        printf("1 - Addition with 16-bit Overflow Check\n");
        printf("2 - Temperature Classifier\n");
        printf("3 - Sum from 1 to N\n");
        printf("4 - Parity and Primality Check\n");
        printf("0 - Exit\n");
        printf("=========================================\n");
        printf("Please enter your choice [0-4]: ");
        fflush(stdout);

        status = read_long(&choice);

        if (feof(stdin) || ferror(stdin)) {
            break;
        }

        if (status != 0) {
            printf("\nInvalid input!\n");
            continue;
        }

        switch (choice) {
            case 1:
                printf("\n--- RUNNING TASK 1 ---\n");
                task1();
                break;

            case 2:
                printf("\n--- RUNNING TASK 2 ---\n");
                task2();
                break;

            case 3:
                printf("\n--- RUNNING TASK 3 ---\n");
                task3();
                break;

            case 4:
                printf("\n--- RUNNING TASK 4 ---\n");
                task4();
                break;

            case 0:
                printf("\nExiting program.\n");
                break;

            default:
                printf("\nInvalid choice! Please select an option between 0 and 4.\n");
                break;
        }

        if (feof(stdin) || ferror(stdin)) {
            break;
        }
    } while (choice != 0);

    return 0;
}
