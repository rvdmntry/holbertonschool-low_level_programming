#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers.
 * @argc: Number of command line arguments.
 * @argv: Array containing the command line arguments.
 * Description: Adds positive numbers provided as command line arguments.
 * Prints the result followed by a new line. If no number is passed,
 * prints 0 followed by a new line. If one of the numbers contains symbols
 * that are not digits, prints "Error", followed by a new line, and returns 1.
 * Return: 0 on success, 1 if an argument contains non-digit characters.
 */
int main(int argc, char *argv[])
{
int sum = (0);
int i, j;

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j]; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}

printf("%d\n", sum);
return (0);
}
