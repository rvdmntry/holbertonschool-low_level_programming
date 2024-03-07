#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of nmemb elements of size bytes each
 * @nmemb: The number of elements.
 * @size: The size of each element.
 * Return: A pointer to the allocated memory, or NULL if nmemb or size is 0
 * or if memory allocation fails. The memory is initialized to zero.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memory = malloc(nmemb * size);
	if (memory == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		memory[i] = (0);

	return (void *)memory;
}
