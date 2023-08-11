#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the old memory allocated
 * @old_size: old size of bytes
 * @new_size: new size of bytes
 * Return: pointer to the newly allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pee;
	size_t i, max = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		pee = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	pee = malloc(new_size);
	if (pee == NULL)
		return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (i = 0; i < max; i++)
		pee[i] = oldp[i];
	free(ptr);
	return (pee);
}
