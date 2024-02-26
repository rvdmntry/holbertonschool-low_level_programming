#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: the string to print in reverse
 */
void print_rev(char *s)
{
	int i = 0;

	// Find the length of the string
	while (s[i] != '\0')
	{
		i++;
	}

	// i now holds the length of the string
	// Print the string in reverse
	while (i > 0)
	{
		_putchar(s[i - 1]);
		i--;
	}

	// Print a new line after the string
	_putchar('\n');
}
