#include "main.h"

/**
 * string_toupper - changes lowercase letters to uppercase
 * @ch: input value
 *
 * Return: char
 */

char *string_toupper(char *ch)
{
	int i;

	for (i = 0; ch[i] != '\0'; i++)
	{
		if (ch[i] >= 97 && ch[i] <= 122)
		{
			ch[i] = ch[i] - 32;
		}
	}
	return (ch);
}
