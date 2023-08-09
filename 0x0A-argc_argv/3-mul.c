#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 * Return: the converted integer
 */

int _atoi(char *s)
{
	int sign, i;
	unsigned int ger;

	sign = 1;
	i = 0;
	ger = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
			i++;
		}
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		ger = (ger * 10) + (s[i] - '0');
		i++;
	}
	ger *= sign;
	return (ger);
}

/**
 * main - a program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int mul, n1, n2;

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
