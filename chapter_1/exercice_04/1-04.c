#include <stdio.h>

// print Celsius-Fahrenheit table
//for celsius = 0, 20, ..., 300;
//floatinq-point version 

int main(void)
{
    int fahr, celsius;
    int upper, lower, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

// Header before the table

    printf("Celsius \t Fahrenheid\n\n");

    celsius = lower;
    while (celsius <= upper)
    {
        fahr = (5.0 / 9.0 * celsius) + 32.0;
        printf(" %3.0f \t\t %6.0f\n", celsius, fahr);
        celsius += step;
    }
}
