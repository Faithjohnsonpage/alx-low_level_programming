#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: string pointer
 * @b: constant byte
 * @n: size of int
 * Return: void
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
