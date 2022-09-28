#include "main.h"
int _sqrt(int, int);
/**
 * _sqrt_recursion - finds square root of number
 * @n: number to find square root
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(n, 0));
}
/**
 * _sqrt - finds square root of number
 * @n: number to find square root
 * @i: iterator
 * Return: square root
 */
int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
	{
		return (-1);
	}
	if (square == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
