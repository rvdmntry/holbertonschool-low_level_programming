#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 * @array: The array to search through.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the function to be used to compare values.
 * Return: The index of the first element for which the cmp function
 * does not return 0. If no element matches, return -1. If size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
