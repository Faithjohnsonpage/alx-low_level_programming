#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @ch: input value
 *
 * Return: char
 */

char *cap_string(char *ch)
{
	int i;

	while (ch[i])
	{
		while (!(ch[i] >= 'a' && ch[i] <= 'z'))

			i++;

		if (ch[i - 1] == ' ' || ch[i - 1] == '\t' || ch[i - 1] == '\n' || ch[i - 1] == ',' || ch[i - 1] == ';' || ch[i - 1] == '.' || ch[i - 1] == '!' || chi[i - 1] == '?' || ch[i - 1] == '"' || ch[i - 1] == '(' || ch[i - 1] == ')' || ch[i - 1] == '{' || ch[i - 1] == '}' || i == 0)
			ch[i] -= 32;
		i++;
	}
	return (i);
}
