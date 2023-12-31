#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns natural square root of number
 * @n: value to be evaluated
 * Return: resulting square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recursion to fine the natural
 * square root of a nummber
 * @n: value to be evaluated
 * @i: iterative times
 * Return: resulting square root
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == 0)
		return (i);
	return (actual_sqrt_recursion(n, (i + 1)));
}
