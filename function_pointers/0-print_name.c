#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name using the function pointed to by @f
 * @name: The name to print
 * @f: Pointer to the function that prints the name
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
