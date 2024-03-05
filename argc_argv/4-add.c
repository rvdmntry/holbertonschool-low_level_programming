#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * Checks if a string consists only of digits.
 * @str: The string to check.
 * Return: 1 if the string is all digits, 0 otherwise.
 */
int is_number(char *str)
{
int i = (0);

while (str[i])
{
if (!isdigit(str[i]))
return (0);
i++;
}
return (1);
}

/**
 * main - Adds positive numbers.
 * @argc: The number of command line arguments.
 * @argv: An array of pointers to the command line arguments.
 * Return: 0 on success, 1 if an argument is not a digit.
 */
int main(int argc, char *argv[])
{
int sum = (0);

for (int i = 1; i < argc; i++)
{
if (is_number(argv[i]))
{
sum += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}

printf("%d\n", sum);
return (0);
}
