#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string to search in
 * @needle: the substring to find
 *
 * Return: pointer to the beginning of the located substring, or NULL if
 * the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	if (*n == '\0')
	{
		return (h);
	}

	while (*h != '\0')
	{
		char *start = h;

		n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (start);
		}

		h = start + (1);
	}

	return (NULL);
}
