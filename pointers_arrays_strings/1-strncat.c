#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to concatenate from src.
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	/* Find the length of the dest string */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* Append up to n bytes from src to dest */
	while (src[i] != '\0' && i < n)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}

	/* Null-terminate the resulting string (if src is shorter than n bytes) */
	dest[dest_len] = '\0';

	return (dest);
}
