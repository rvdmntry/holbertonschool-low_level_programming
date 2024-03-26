#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

/* Function Prototypes */

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string containing the binary number
 * Return: the converted number, or 0 if there is an error
 */
unsigned int binary_to_uint(const char *b);

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

#endif /* MAIN_H */
