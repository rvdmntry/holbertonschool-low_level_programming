#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to search.
 * @index: The index, starting from 0, of the bit you want.
 *
 * Return: The value of the bit at index or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	return ((n >> index) & 1);
}
