#include <stdio.h>
/**
 * main - Prints numbers between "012" to 789
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, e, g;

	i = 48;
	e = 48;
	g = 48;

	while (e < 58)
	{
		i = 48;
		while (i < 58)
		{
			g = 48;
			while (g < 58)
			{
				if (i != e && i != g && e < i && i < g)
				{
					putchar(e);
					putchar(i);
					putchar(g);
					if (i == 57 && e == 56 && g == 58)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				g++;
			}
			i++;
		}
		e++;
	}
	putchar('\n')
	return (0)
}
