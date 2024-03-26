#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 * Return: The converted number, or 0 if:
 * - One or more chars in the string b are not 0 or 1.
 * - b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b)
		return (0);

	while (*b)
	{
		num <<= 1;
		if (*b == '1')
			num |= 1;
		else if (*b != '0')
			return (0);
		b++;
	}

	return (num);
}
