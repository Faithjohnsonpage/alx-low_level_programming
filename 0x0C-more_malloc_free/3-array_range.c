#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: min value
 * @max: max value
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int a, l;
	int *ptA;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	ptA = malloc(sizeof(int) * l);
	if (ptA == NULL)
		return (NULL);
	for (a = 0; a < l; a++)
	{
		ptA[a] = min;
		min++;
	}
	return (ptA);
}
