#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array using
 * binary search algorithm
 * @array: Pointer to the first element of the sorted array
 * @size: Number of elements in the array
 * @value: Value to search for in the array
 *
 * Return: If value is found, the index of value in array,
 * otherwise, -1 if value is not present or array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, i;
	size_t h = size - 1;
	size_t mid;

	if (array == NULL)
		return (-1);

	while (l <= h)
	{
		mid = l + (h - l) / 2;

		printf("Searching in array: ");
		for (i = l; i <= h; i++)
		{
			if (i == h)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			l = mid + 1;
		else
			h = mid - 1;
	}

	return (-1);
}
