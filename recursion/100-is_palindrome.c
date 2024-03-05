#include "main.h"
#include <stdio.h>

int check_palindrome(char *s, int start, int end);

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if the string is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int length = (0);

	while (s[length] != '\0')
		length++;

	if (length == 0)
		return (1);

	return check_palindrome(s, 0, length - 1);
}

/**
 * check_palindrome - Helper function to check if a string is a palindrome.
 * @s: The string to be checked.
 * @start: The starting index of the string to be checked.
 * @end: The ending index of the string to be checked.
 *
 * Return: 1 if the string is a palindrome, 0 if not.
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return check_palindrome(s, start + 1, end - 1);
}
