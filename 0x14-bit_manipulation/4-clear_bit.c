#include "main.h"

/**
 * clear_bit - Clears the value of a bit to 0 at a given index.
 * @n: Pointer to the number whose bit is to be cleared.
 * @index: Index of the bit to be cleared.
 *
 * Return: 1 if successful, -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1); /* Error: Index out of range */
	}

	*n &= ~(1UL << index);
	return (1); /* Success */
}
