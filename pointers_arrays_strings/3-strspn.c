#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to be scanned
 * @accept: the string containing the list of characters to match in s
 *
 * Return: the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *start = accept;

	while (*s && *accept)
	{
		if (*s == *accept)
		{
			count++;
			s++;
			accept = start;
		}
		else
		{
			accept++;
			if (*accept == '\0')
			{
				s++;
				accept = start;
			}
		}
	}
	return (count);
}
