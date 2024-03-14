#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Description: If separator is NULL, it won't be printed.
 * Each number is followed by the separator, except the last number.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list numbers;
unsigned int i;

va_start(numbers, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(numbers, int));
if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}

va_end(numbers);
printf("\n");
}
