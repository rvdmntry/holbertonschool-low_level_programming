#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: destination buffer to copy the string to.
 * @src: source string to be copied.
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	// Copy each character from src to dest, including the null terminator
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	// Don't forget to add the null terminator at the end
	dest[i] = '\0';

	// Return the destination buffer
	return dest;
}
