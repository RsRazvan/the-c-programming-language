#include <stdio.h>

// print Fahrenheit-Celsius table in revers order with for loop
// for Fahrenheit = 300, 280, ..., 0;
// floatinq-point version 

int main(void) 
{
int fahr;
	
//Header before the table
printf("Fahrenheit \t Celsius\n\n");

for (fahr = 300; fahr >= 0; fahr -= 20)
{
	printf("%3d \t\t %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}
}

//Observation:
//In this exercice both, for and while, are correct
//In this case while is more friendly for programmer, but 
// for is much compact and use less variables
