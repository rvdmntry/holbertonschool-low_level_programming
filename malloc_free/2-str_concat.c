#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * Return: Pointer to the newly allocated memory containing the concatenated
 * strings, or NULL if memory allocation fails
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len1 = 0, len2 = 0, i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	concat = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	while (*s1)
		concat[i++] = *s1++;
	while (*s2)
		concat[i++] = *s2++;

	concat[i] = '\0';

	return (concat);
}
