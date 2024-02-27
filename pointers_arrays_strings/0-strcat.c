#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string to be appended upon.
 * @src: The source string to append to dest.
 * Return: A pointer to the resulting destination string.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
