#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit number
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putschar(i);

		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	{
	putchar('\n');
	return (0);
	}
}
