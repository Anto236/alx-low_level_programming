#include "3-calc.h"
/**
 * op_add - function that adds two numbers
 * @a: first number
 * @b: second number
 * Return: addition
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function that subtracts two numbers
 * @a: first number
 * @b: second number
 * Return: subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function that multiplies two numbers
 * @a: first number
 * @b: second number
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function that divides two numbers
 * @a: first number
 * @b: second number
 * Return: division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - finds the modulo of two numbers
 * @a: first number
 * @b: second number
 * Return: remainder of division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
