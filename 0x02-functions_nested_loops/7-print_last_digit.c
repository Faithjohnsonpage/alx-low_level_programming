#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @m: the number to be evaluated
 *
 * Return: int
 */

int print_last_digit(int m)
{
	int c;

	if (m < 0)
	m = -m;

	c = m % 10;

	if (c < 0)
	c = -c;

	_putchar(c + '0');
	return (c);
}
