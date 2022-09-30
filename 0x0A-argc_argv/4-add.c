#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - finds sum of two positive numbers
 * @argc: length of string
 * @argv: the string
 * Return: 0 if success or 1 if Error
 */
int main(int argc, char *argv[])
{
	int i, j, k, sum = 0, num;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (k = 1; k < argc; k++)
	{
		num = atoi(argv[k]);
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
