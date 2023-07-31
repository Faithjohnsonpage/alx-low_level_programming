#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to block of memory
 * @b: value to be set
 * @n: no of bytes
 *
 * Return: a pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
