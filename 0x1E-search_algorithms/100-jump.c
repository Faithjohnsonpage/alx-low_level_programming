#include <stdio.h>
#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array using
 * the jump search algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for in the array
 *
 * Return: If value is found, the index of the first occurrence of
 * value in array, otherwise, -1 if value is not present or array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t sqroot, l, h;

	sqroot = sqrt(size);
	l = 0, h = sqroot;

	if (array == NULL)
		return (-1);

	while (h <= (size - 1))
	{
		printf("Value checked array[%lu] = [%d]\n", l, array[l]);
		printf("Value checked array[%lu] = [%d]\n", h, array[h]);
		if (array[h] >= value || h == size - 1)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", l, h);
			break;
		}
		l = h;
		h += sqroot;
	}

	while (l <= h && l < size)
	{
		printf("Value checked array[%lu] = [%d]\n", l, array[l]);
		if (array[l] == value)
			return (l);
		l++;
	}

	return (-1);
}
