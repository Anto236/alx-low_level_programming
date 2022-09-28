#include "main.h"
int prime(int, int);
/**
 * is_prime_number - checks if number is a prime
 * @n: number to be checked
 * Return: 1 if prime number or 0 if not
 */
int is_prime_number(int n)
{
	return (prime(n, 1));
}
/**
 * prime - check if number is prime
 * @n: number to be checked
 * @i: iterator
 * Return: 1 if prime and 0 if null
 */
int prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (1);
	}
	return (prime(n, i + 1));
}
