#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be modified.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize = 1;

	char separators[] = " \t\n,;.!?\"(){}";
	int sep_count = 13;

	while (str[i] != '\0')
	{
		for (int j = 0; j < sep_count; j++)
		{
			if (str[i] == separators[j])
			{
				capitalize = 1;
				break;
			}
		}

		if (capitalize && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
			capitalize = 0;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z' || (str[i] >= '0' && str[i] <= '9'))
		{

			capitalize = 0;
		}

		i++;
	}

	return (str);
}
