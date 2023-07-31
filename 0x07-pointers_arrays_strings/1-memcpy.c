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
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	
	while (j < n && src[i] != '\0')
	{
		dest[i] = src[j];
	}
	dest[i] = '\0'

	return(dest);

}
