#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: points to dest variable
 * @src: points to src variable
 * @n: no of bytes to be copied
 *
 * Return: copied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[j];
		n--;
	}

	return(dest);
}
