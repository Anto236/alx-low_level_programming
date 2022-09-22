#include "main.h"
/**
 * cap_string - Write a function that capitalizes all words of a string.
 * @x: string to be capitalized
 * Return: resultant string
 */
char *cap_string(char *x)
{
	char spc[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	int len = 13;
	int a = 0, i;

	while (x[a])
	{
		i = 0;
		while (i < len)
		{
			if ((a == 0 || x[a - 1] == spc[i]) && (x[a] >= 97 && x[a] <= 122))
				x[a] = x[a] - 32;
			i++;
		}
		a++;
	}
	return (x);
}
