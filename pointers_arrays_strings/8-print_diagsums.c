#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the start of the matrix
 * @size: the size of the matrix (number of rows/columns)
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
int i;
unsigned long (sum1 = 0, sum2 = 0);

for (i = 0; i < size; i++)
{
sum1 += a[(size + 1) * i];
sum2 += a[(size - 1) * (i + 1)];
}

printf("%lu, %lu\n", sum1, sum2);
}
