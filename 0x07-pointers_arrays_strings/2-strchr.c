#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: string to be searched
 * @c: searched character
 *
 * Return: pointer to c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] = '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		else
		{
			return (NULL);
		}
	}
}
