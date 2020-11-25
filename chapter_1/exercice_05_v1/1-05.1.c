#include <stdio.h>

// print Fahrenheit-Celsius table in revers order with while
// for Fahrenheit = 300, 280, ..., 0;
// floatinq-point version 

int main(void)
{
    float fahr, celsius;
    int upper, lower, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

// Header before the table

    printf("Fahrenheid \t Celsius\n\n");

    fahr = upper;
    while (fahr >= lower)
    {
        celsius = (5.0 / 9.0) * ( fahr - 32.0);
        printf(" %3.0f \t\t %6.1f\n", fahr, celsius);
        fahr -= step;
    }
}

