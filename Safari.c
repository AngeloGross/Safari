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

void seeElephant()
{
	printf("tooorooooo,toooroooooo\n");
}

seeLion()

int main(void)
{
	char cAnimalChoice;
	scanf("%c",cAnimalChoice);

	if(cAnimalChoice=='L')
		seeLion();
	else if(cAnimalChoice=='E')
		seeElephant();
	else
		printf("Please restart the program");

	return 0;
}
