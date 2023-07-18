#include "main.h"

/**
 * main - prints the alphabet, in lowercase
 *
 * Return: void
 */

void print_alphabet(void);
{
	char c = 'a'

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
}
