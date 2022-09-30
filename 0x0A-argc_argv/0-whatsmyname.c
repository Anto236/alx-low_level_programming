#include "main.h"
#include <stdio.h>
/**
 * main - print the file name
 * @argc: print length
 * @argv: print string
 * Return: 0 on success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

