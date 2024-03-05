#include <stdio.h>

/**
 * main - Prints the program name, followed by a new line.
 * @argc: The number of command line arguments.
 * @argv: An array of pointers to the command line arguments.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
(void)argc;
printf("%s\n", argv[0]);
return (0);
}
