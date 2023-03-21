#include<stdio.h>
#include"main.h"

/**
 * print_times_table - Prints the times table for the given integer n.
 *
 * @n: The maximum integer value to print in the times table.
 */
void print_times_table(int n)
{
    int hour, minute;

    for (hour = 0; hour <= n; hour++) {
        for (minute = 0; minute <= n; minute++) {
            if (minute == 0) {
                printf("%2d", hour * minute);
            } else {
                printf(",%3d", hour * minute);
            }
        }
        printf("\n");
    }
}

