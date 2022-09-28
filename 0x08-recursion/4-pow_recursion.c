#include "main.h"
/**
 * _pow_recursion - finds power of a value
 * @x: number to be raised or powered
 * @y: number of times to power
 * Return: x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
