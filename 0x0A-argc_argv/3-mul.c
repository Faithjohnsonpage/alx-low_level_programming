#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 * Return: the converted integer
 */


/**
 * main - a program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int mul = 0, n1, n2;

	if (argv < 3 || argv > 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	mul = n1 * n2;

	printf("%d", mul);

	return (0);
}
