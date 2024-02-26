#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string to calculate the length of.
 * Return: the length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
