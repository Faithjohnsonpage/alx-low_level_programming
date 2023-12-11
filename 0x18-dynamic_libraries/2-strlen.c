#include "main.h"

/**
 * _strlen - check the length of string
 * @s: string to be checked
 *
 * Return: Always (0) Success
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
