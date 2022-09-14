#include <stdio.h>
/**
 * main - finds and prints sum of even terms
 * starting with 1 and 2
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	unsigned long int j, k, sum, new;

	j = 1;
	k = 2;
	sum = 0;

	for (i = 1; i < 34; ++i)
	{
		if (j < 4000000 && ((j % 2) == 0)
		{
			sum += j;
		}
		new = j + k;
		j = k;
		k = new;
	}
	printf("%lu\n", sum);
	return (0);
}
