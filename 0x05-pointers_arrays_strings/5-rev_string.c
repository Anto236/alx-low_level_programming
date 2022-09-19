#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int count = 0, i, j;
	char *str, tmp;

	while (count >= 0)
	{
		if (s[count] == '\0')
		{
			break;
		}
		count++;
	}
	str = s;

	for (i = 0; i < (count - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			tmp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = tmp;
		}
	}
}
