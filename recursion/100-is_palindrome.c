#include "main.h"

int check_palindrome(char *s, int start, int end);

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if the string is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int length = 0;

	while (s[length] != '\0') // Calculate the length of the string
		length++;

	// An empty string is considered a palindrome
	if (length == 0)
		return 1;

	// Use a helper function to check if the string is a palindrome
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
	// Base case: If there is only one character or no character
	if (start >= end)
		return 1;

	// If characters at the start and end are not the same, it's not a palindrome
	if (s[start] != s[end])
		return 0;

	// Move towards the center
	return check_palindrome(s, start + 1, end - 1);
}
