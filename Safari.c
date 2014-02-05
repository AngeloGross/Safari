/* This time we shall simulate a Safari.
 * There will be two functions.
 * seeLion() and seeElephant().
 * The user shall press "L" if he wants to see
 * a lion or "E" for an elephant.
 * Team one will make the lion function and
 * Team two will make the elephant function.
 * Both teams have to come up with a solution
 * for the main function...*/

#include <stdio.h>

void seeLion()
{
	printf("\nwhooaaaaaa, whooaaaaaa");
}

seeElephant()


int main(void)
{
	char cUserInput;
	printf("Please choose 'L' if you want to see a lion\nor 'E' if you want to see an elephant\n");
	scanf("%c",&cUserInput);

	switch(cUserInput)
	{
		case 'L': seeLion();
			  break();
		case 'E': seeElephant();
			  break();
		default : break();
	}

	return 0;
}
