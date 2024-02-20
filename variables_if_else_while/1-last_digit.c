#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
** main - Prints the last digit of the number stored in the variable n.
*
* Return: Always 0.
*/
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10; // Get the last digit

	printf("Last digit of %d is %d", n, last_digit);

	if (last_digit > 5)
    {
	printf("and is greater than 5\n");
    }
	else if (last_digit == 0)
    {
        printf("and is 0\n");
    }
	else if (last_digit < 6 && last_digit != 0) // No need to check for < 6 as it's implicit
    {
	printf("and is less than 6 and not 0\n");
    }

	return 0;
}
