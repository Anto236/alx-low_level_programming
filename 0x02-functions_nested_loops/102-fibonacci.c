#include <stdio.h>
/**
 * main - prints first 50 Fibonacci numbers
 * starting with 1 and 2
 * Return: Always 0 (success)
 */
int main(void)
{
	int c;
	long int i, j, k;

	i = 1;
	j = 2;
	for (c = 1; c <= 50; c++)
	{
		if (i != 20365011074)
		{
			printf("%ld, ", i);
		}
		else
		{
			printf("%ld\n", i);
		}
		k = i + j;
		i = j;
		j = k;
	}
	return (0);
}
