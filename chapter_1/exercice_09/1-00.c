#include <stdio.h>
/*This program copy its input to its output and reaplce each string of one or more blanks by a single blank*/

int main(void)
{
char c, aux;  /*aux is an auxiliary variable*/

putchar(aux = getchar());
	
while ((c = getchar()) != EOF)
{
	if (c != ' ' || aux != ' ')
	{
		putchar(c);
	}	
	aux = c;
}
}
