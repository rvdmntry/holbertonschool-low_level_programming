#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase, followed by a new line, 10 times
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (count < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		count++;
	}
}
