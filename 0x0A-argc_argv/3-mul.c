#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two arguments
 * @argc: length of string
 * @argv: string
 * Return: Error if 1 else 0 on success
 */
int main(int argc, char *argv[])
{
	int result, i, j;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	result = i * j;
	printf("%d\n", result);
	return (0);
}
