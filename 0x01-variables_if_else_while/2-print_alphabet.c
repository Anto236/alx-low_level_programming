#include <stdio.h>
/**
 * main - prints alphabet in lower case
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar("%c ", ch);
		ch++;
	}
	return (0)
}
