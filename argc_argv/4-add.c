#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers.
 * @argc: The number of command line arguments.
 * @argv: An array of pointers to the command line arguments.
 * Return: 0 on success, 1 if an argument contains non-digit characters.
 */
int main(int argc, char *argv[])
{
int sum = (0);

for (int i = 1; i < argc; i++)
{
for (int j = 0; argv[i][j]; j++)
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
