#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: input
 *
 * Return: print
 */

void puts2(char *str)
{
	int len = 0;
	int t = 0;
	char *y = str;
	int i;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	t = len - 1;

	for (i = 0; i <= t; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
