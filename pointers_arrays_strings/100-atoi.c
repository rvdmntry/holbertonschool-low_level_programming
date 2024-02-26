#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: the string to be converted.
 *
 * Return: the integer value of the converted string.
 */
int _atoi(char *s)
{
int result = 0;
int sign = 1;
int i = 0;

// Skip non-sign and non-digit characters
while (s[i] != '\0' && (s[i] < '0' || s[i] > '9')) {
if (s[i] == '-')
sign *= -1;
i++;
}

// Convert number starting from the first digit
while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9') {
result = result * 10 + (s[i] - '0');
i++;
}

return result * sign;
}
