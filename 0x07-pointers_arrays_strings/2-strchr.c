#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string to be searched for character
 * @c: character to be located
 * Return: string
 */
char *_strchr(char *s, char c)
{
	int i = 0, b;

	while (s[i])
		i++;

	for (b = 0; b < i; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}
	return ('\0');
}
