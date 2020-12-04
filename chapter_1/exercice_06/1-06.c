#include <stdio.h>

//This program print the value of EOF

int main(void) 
{
	printf ("Expresion value is %d.\n", getchar() != EOF );
}

//Observation
// The expresion value is 1 if the character is not EOF sinal
