#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char tmp;

	int i, j;

	j = 0;
	while (s[j] != '\0')
	{
		j++;
	}
	j--;
	for (i = 0; i < j / 2; i++)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j--] = tmp;
	}
}
