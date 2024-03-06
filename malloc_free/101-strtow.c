#include "main.h"
#include <stdlib.h>

/**
 * word_len - Calculates the length of a word.
 * @str: String to measure the first word's length.
 * Return: Length of the word.
 */
int word_len(char *str)
{
int len = 0;

while (*(str + len) && *(str + len) != ' ')
len++;
return (len);
}

/**
 * count_words - Counts the number of words in a string.
 * @str: String to count words in.
 * Return: Number of words.
 */
int count_words(char *str)
{
int words = 0, in_word = 0;

while (*str)
{
if (*str == ' ' && in_word)
in_word = 0;
else if (*str != ' ' && !in_word)
{
in_word = 1;
words++;
}
str++;
}
return (words);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 * Return: A pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
char **split;
int i = 0, words = 0, len = 0, j, k;

if (!str || !*str)
return (NULL);
words = count_words(str);
if (words == 0)
return (NULL);

split = malloc(sizeof(char *) * (words + 1));
if (!split)
return (NULL);

while (i < words)
{
while (*str == ' ')
str++;
len = word_len(str);
split[i] = malloc(sizeof(char) * (len + 1));
if (!split[i])
{
for (k = 0; k < i; k++)
free(split[k]);
free(split);
return (NULL);
}
for (j = 0; j < len; j++)
split[i][j] = str[j];
split[i][j] = '\0';
str += len;
i++;
}
split[words] = NULL;
return (split);
}
