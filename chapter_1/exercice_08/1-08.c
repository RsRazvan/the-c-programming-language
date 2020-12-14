#include <stdio.h>

/*This program cont blank spaces, tabs and lines*/

int main(void) {

	int c, blanks = 0, tabs = 0, newline = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ')
		{
			++blanks;
		}
		if (c == '\t')
		{
			++tabs;
		}
		if (c == '\n')
		{
			++newline;
		}
	}
	printf(" Blanks: %d\n Tabs: %d\n Lines: %d\n", blanks, tabs, newline);
}

//Observation:
//For condition to become false need to enter EOF
//In windows can simulate the EOF with ctrl + z

//A program need to be careful with = and == 
//Equal sign = is for atribution but
//the double equals sign == is the C notation for "is equal to"
