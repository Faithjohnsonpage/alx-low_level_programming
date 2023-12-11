#include "main.h"

/**
 * _strpbrk - matches first characters in strings
 * @s: first string
 * @accept: second string
 *
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	int ch;

	while (*s)
	{
		for (ch = 0; accept[ch]; ch++)
		{
			if (*s == accept[ch])
				return (s);
		}
		s++;
	}
	return ('\0');
}
