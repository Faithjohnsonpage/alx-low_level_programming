#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 *
 * Return: 0 Always (Success)
 *
 */

int main(void)
{
	char c, d;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (d = 'A'; c <= 'Z'; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
