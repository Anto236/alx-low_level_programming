#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @n - int to obtain last digit from.
 * Return:value of last digit
 */
int print_last_digit(int n)
{
	int r;

	r = n % 10;
	if (r < 0)
	{
		_putchar(-r + 48);
		return (-r);
	}
	else
	{
		_putchar(r + 48);
		return (r);
	}
}
