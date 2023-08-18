#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function that executes a function
 * given as a parameter on each element of an array
 * @array: array considered
 * @size: how many elem to print
 * @action: function pointer
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;


	if (array == NULL || action == NULL)
		return;


	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
