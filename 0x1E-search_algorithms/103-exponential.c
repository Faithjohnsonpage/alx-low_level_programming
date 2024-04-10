#include <stdio.h>
#include "search_algos.h"

int binary_searches(int *array, size_t low, size_t high, size_t n, int value);

/**
 * exponential_search - Searches for a value in a sorted array
 * using exponential search algorithm.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present in the array or the array is
 * NULL, returns -1.
 * Otherwise, returns the index of the value in the array.
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, index;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);

		i *= 2;
	}

	index = binary_searches(array, i / 2, i, size, value);
	return (index);
}

/**
 * binary_searches - Searches for a value in a sorted array
 * using binary search algorithm.
 * @array: A pointer to the first element of the array to search.
 * @low: The index of the lowest element of the current subarray.
 * @high: The index of the highest element of the current subarray.
 * @n: The total number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present in the array, returns -1.
 * Otherwise, returns the index of the value in the array.
 */

int binary_searches(int *array, size_t low, size_t high, size_t n, int value)
{
	size_t l = low, r, mid, i;

	if (high < n - 1)
		r = high;
	else
		r = n - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", l, r);
	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			if (i == r)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}

		mid = l + (r - l) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}

		if (array[mid] < value)
			l = mid + 1;
		else
			r = mid - 1;
	}

	return (-1);
}
