#include "main.h"

/**
 * _strlen - function returns the length of a string
 * @s: char variable
 *
 * Return: s
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
