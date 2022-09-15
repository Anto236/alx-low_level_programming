#include "main.h"
/**
 * print_numbers - function that prints the numbers, from 0 to 9
 * followed by a new line.
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		_putchar(c + 48);
	}
	_putchar('\n');
}
