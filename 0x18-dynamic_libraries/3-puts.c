#include "main.h"
#include <stddef.h>

/**
 * _puts - Prints a string to the standard output, followed by a newline.
 *
 * @s: A pointer to the string to be printed.
 *
 */

void _puts(char *s)
{
	/* Check if the string is not NULL */
	if (s == NULL)
	{
		return;
	}

	/* Loop through each character until the null terminator is reached */
	while (*s != '\0')
	{
		/* Print the character */
		_putchar(*s);
		/* Move to the next character in the string */
		s++;
	}

	/* Print a newline character at the end */
	_putchar('\n');
}
