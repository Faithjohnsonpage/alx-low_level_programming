#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	int shift, i;
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	shift = sizeof(unsigned long int) * 8 - 1;

	while (!(n & (1UL << shift)) && shift > 0)
	{
		shift--;
	}

	for ( i = shift; i >= 0; i--)
	{
		_putchar((n & (1UL << i)) ? '1' : '0');
	}
}
