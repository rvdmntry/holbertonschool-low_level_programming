#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of the program.
 * @ac: The number of arguments.
 * @av: The arguments array.
 * Return: Pointer to a new string with all arguments concatenated,
 * followed by a newline, or NULL if ac == 0, av == NULL, or failure.
 */
char *argstostr(int ac, char **av)
{
	int i, j, (len = 0, total_len = 0);
	char (*str, *ptr);

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			total_len++;
		total_len++;
	}

	str = (char *)malloc(sizeof(char) * (total_len + 1));
	if (str == `NULL)
		return (NULL);

	ptr = str;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*ptr++ = av[i][j];
		}
		*ptr++ = '\n';
	}
	*ptr = '\0';

	return (str);
}
