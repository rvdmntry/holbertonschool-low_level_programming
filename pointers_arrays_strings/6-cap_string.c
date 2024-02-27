#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @s: The string to capitalize.
 *
 * Return: The capitalized string.
 */
char *cap_string(char *s)
{
	int i = 0;
	int capitalize = 1;


	char separators[] = " \t\n,;.!?\"(){}";

	while (s[i] != '\0')
	{

		int is_separator = 0;

		for (int j = 0; separators[j] != '\0'; j++)
		{
			if (s[i] == separators[j])
			{
				is_separator = 1;
				break;
			}
		}

		if (capitalize && s[i] >= 'a' && s[i] <= 'z')
		{

			s[i] -= ('a' - 'A');
			capitalize = 0;
		}
		else if (!is_separator)
		{
			capitalize = 0;
		}
		else
		{
			capitalize = 1;
		}

		i++;
	}

	return (s);
}
