#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array using linear
 * search algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for in the array
 *
 * Return: If value is found, the index of the first occurrence of value
 * in array, otherwise, -1 if value is not present or array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}

	}
	return (-1);

}
