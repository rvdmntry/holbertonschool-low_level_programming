#include "function_pointers.h"
#include <stddef.h> /* For size_t */

/**
 * array_iterator - Executes function given parameter on each element of array
 * @array: The array to iterate over.
 * @size: The size of the array.
 * @action: Pointer to the function to use.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i; /* Iterator variable */

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
