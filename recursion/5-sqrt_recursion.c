#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the square root of
 *
 * Return: the natural square root of n
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (n);

return (calculate_sqrt(n, 1));
}

/**
 * calculate_sqrt - auxiliary function to calculate square root
 * @n: number to find the square root of
 * @i: iterator for calculating square root
 *
 * Return: the square root of n
 */
int calculate_sqrt(int n, int i)
{
if (i * i == n)
return (i);
if (i * i > n)
return (-1);
return (calculate_sqrt(n, i + 1));
}
