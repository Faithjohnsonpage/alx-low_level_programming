#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: copied to
 * @src: copied from
 *
 * Return: string value
 */

char *_strcpy(char *dest, char *src)
{
	int m = 0;
	int n = 0;

	while (*(src + m) != '\0')
	{
		m++;
	}
	for (; n < m; n++)
	{
		dest[n] = src[n];
	}
	dest[m] = '\0';
	return (dest);
}
