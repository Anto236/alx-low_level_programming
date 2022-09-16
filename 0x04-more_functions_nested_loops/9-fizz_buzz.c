#include "main.h"
#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100
 * not include multiple of 3 and 5
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz ");
		}
		if ((i % 3) != 0 && i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
