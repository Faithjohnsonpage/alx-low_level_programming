#include "main.h"

/**
 * _strspn - returns length of initial substring of string
 * @s: string to be scanned
 * @accept: string to match
 *
 * Return: Always (0) Success
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
			{
				a++;
				break;
			}
			else if (accept[b + 1] == '\0')
				return (a);
		}
		s++;
	}
	return (a);
}
