#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: input
 *
 * Return: half
 */

void puts_half(char *str)
{
	int len = 0;
	char *h =  str;
	int i;

	while (*h != '\0')
	{
		len++;
		h++;
	}
	for (i = 0; i <= (len / 2); i++)
	{
		_putchar(str(i);
	}
	_putchar('\n');
}

