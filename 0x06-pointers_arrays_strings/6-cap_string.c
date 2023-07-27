#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @ch: input value
 *
 * Return: char
 */

char *cap_string(char *ch)
{
	int index = 0;

	while (ch[index])
	{
		while (!(ch[index] >= 'a' && ch[index] <= 'z'))

			index++;

		if (ch[index - 1] == ' ' || ch[index - 1] == '\t' || ch[index - 1] == '\n' || ch[index - 1] == ',' || ch[index - 1] == ';' || ch[index - 1] == '.' || ch[index - 1] == '!' || chi[index - 1] == '?' || ch[index - 1] == '"' || ch[index - 1] == '(' || ch[index - 1] == ')' || ch[index - 1] == '{' || ch[index - 1] == '}' || index == 0)
			ch[index] -= 32;
		index++;
	}
	return (ch);
}
