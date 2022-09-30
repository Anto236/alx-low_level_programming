#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change
 * for an amount of money.
 * @argc: parameter
 * @argv: string
 * Return: 0 on sucess i otherwise
 */
int main(int argc, char *argv[])
{
	int i, num, result = 0;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	for (i = 0; i < 5; i++)
	{
		while (num >= coin[i])
		{
			num -= coin[i];
			result++;
		}
	}
	printf("%d\n", result);
	return (0);
}
