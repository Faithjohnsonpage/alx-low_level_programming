#include <stdio.h>
#include "search_algos.h"

int recursiveBinarySearch(int *array, size_t start, size_t end, int value);

/**
 * advanced_binary - Searches for the first occurrence of a value in a
 * sorted array using binary search algorithm.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If value is not present in the array or array is NULL, returns -1.
 * Otherwise, returns the index of the first occurrence of value in the array.
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t start = 0, end = size - 1;
	int index;

	if (array == NULL)
		return (-1);

	if (array[start] == value)
		return (start);

	index = recursiveBinarySearch(array, start, end, value);
	return (index);
}

/**
 * recursiveBinarySearch - Recursive helper function for binary search
 * algorithm.
 * @array: A pointer to the first element of the array to search.
 * @start: The index of the start of the current subarray.
 * @end: The index of the end of the current subarray.
 * @value: The value to search for.
 *
 * Return: If the value is not present in the current subarray, returns -1.
 * Otherwise, returns the index of first occurrence of value in the subarray.
 */

int recursiveBinarySearch(int *array, size_t start, size_t end, int value)
{
	size_t mid, i;


	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		if (i == end)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}

	mid = start + (end - start) / 2;

	if (array[mid] != array[end])
	{
		if (array[mid] < value)
			return recursiveBinarySearch(array, mid + 1, end, value);
		else
			return recursiveBinarySearch(array, start, mid, value);
	}

	return (-1);
}
