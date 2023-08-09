#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argv; /* Declare an unused variable */
	printf("%d"\n, argc - 1);

	return (0);
}
