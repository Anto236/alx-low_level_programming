#include <stdio.h>
/**
 * main - prints lowercase alphabet except q and e
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && != 'q')
		{
			puchchar(ch);
		}
		ch++
	}
	{
	putchar('\n');
	return (0);
	}
}
