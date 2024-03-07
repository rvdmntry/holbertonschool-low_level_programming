#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers ordered from min to max
 * @min: the minimum value included in the array
 * @max: the maximum value included in the array
 * Return: pointer to the newly created array of integers or NULL if
 * min > max or malloc fails
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		arr[i] = min;

	return (arr);
}
