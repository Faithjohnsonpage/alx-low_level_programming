#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: input value
 * @n: input value
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;
	int ch;

	for (i = 0; (i < n / 2); i++)
	{
		ch = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = ch;
	}
}
