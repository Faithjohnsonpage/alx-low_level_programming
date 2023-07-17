#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* your code goes there */
/**
 * main -  This program will assign a random number to a variable n
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* more headers goes there */
	printf("%d \n", x);

	if (n > 0)
	{
		printf("The number is positive \n");
	}
	else if (n < 0)
	{
		printf("The number is negative \n");
	}
	else
	{
		printf("The number is zero \n");
	}
	return (0);
}
