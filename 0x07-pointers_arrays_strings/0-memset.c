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
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
