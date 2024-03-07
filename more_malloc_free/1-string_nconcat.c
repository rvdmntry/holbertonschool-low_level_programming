#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using at most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: A pointer to the newly allocated space in memory containing the concatenated string.
 *         Returns NULL if the function fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		len2 = n;

	concat_str = malloc(len1 + len2 + 1); // +1 for the null terminator
	if (concat_str == NULL)
		return (NULL);

	while (i < len1)
	{
		concat_str[i] = s1[i];
		i++;
	}

	while (i < (len1 + len2))
	{
		concat_str[i] = s2[j];
		i++;
		j++;
	}
	concat_str[i] = '\0';

	return (concat_str);
}
