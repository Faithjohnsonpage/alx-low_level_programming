#include <stdio.h>

/**
 * main - Exclude letters in C
 *
 * Return: 0 Always (Success)
 *
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
