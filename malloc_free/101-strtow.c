#include "main.h"
#include <stdlib.h>

/**
 * word_count - Counts the number of words in a string
 * @str: The string to be counted
 * Return: The number of words
 */
int word_count(char *str)
{
	int count = 0, in_word = 0;

	while (*str)
	{
		if (*str == ' ')
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return count;
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 * Return: A pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	char **array, *temp;
	int i = 0, j = 0, length = 0, words, k = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	words = word_count(str);
	if (words == 0)
		return (NULL);

	array = malloc((words + 1) * sizeof(char *));
	if (!array)
		return (NULL);

	while (i < words)
	{
		while (str[k] == ' ')
			k++;
		length = 0;
		while (str[k + length] != ' ' && str[k + length])
			length++;

		array[i] = malloc((length + 1) * sizeof(char));
		if (!array[i])
		{
			for (; i >= 0; i--)
				free(array[i]);
			free(array);
			return (NULL);
		}

		temp = array[i];
		for (j = 0; j < length; j++)
			*temp++ = str[k + j];
		*temp = '\0';

		k += length;
		i++;
	}
	array[words] = (NULL);

	return (array);
}
