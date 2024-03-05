#include <stdio.h>

/**
 * main - Prints the number of command line arguments passed.
 * @argc: The number of command line arguments.
 * @argv: An array of pointers to the command line arguments.
 * We won't use argv in this program, hence the attribute to avoid warnings.
 * Return: 0 on success.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{

printf("%d\n", argc - 1);
return (0);
}
