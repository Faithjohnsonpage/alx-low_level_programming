#include <stddef.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 *
 * Return: the converted number, or 0 if b is NULL 
 * or contains non-binary chars.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, power = 1, str_len = 0;
	int i;

	if (b == NULL)
		return (0);

	while (b[str_len] != '\0')
	{
		str_len++;
	}

	for (i = str_len - 1; i >= 0; i--)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		if (b[i] == '1')
		{
			decimal += power;
		}
		power *= 2;
	}
	return (decimal);
}
