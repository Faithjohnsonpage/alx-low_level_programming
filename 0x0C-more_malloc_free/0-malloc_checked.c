#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: allocated bytes for memory
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptB;

	ptB = malloc(b);
	if (ptB == NULL)
		exit(98);

	return (ptB);
}
