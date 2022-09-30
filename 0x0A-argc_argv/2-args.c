#include "main.h"
#include <stdio.h>
/**
 * main - print each argument followed by new line
 * @argc: length of argument
 * @argv: string or no of arguments
 * Return: 0 sucess
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", *(argv + i));
	return (0);
}
