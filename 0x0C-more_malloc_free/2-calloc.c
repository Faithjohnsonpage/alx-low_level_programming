#include <stdio.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: no of elements in the array
 * @size: size of each element
 * Return: a pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == 0)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (ptr);
}
