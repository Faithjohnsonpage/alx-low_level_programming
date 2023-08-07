#include "main.h"

/**
 * _strncat - concantenates two strings
 * @dest: string to append on
 * @src: string copied
 * @n: no of element to cat
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int m, p;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	p = 0;
	while (p < n && src[p] != '\0')
	{
		m++;
		p++;
	}
	dest[m] = '\0';
	return (dest);
}
