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

	while (1)
	{
		i = *s++;

		if (i == c)
		{
			return (s - 1);
		}
		if (i == 0)
		{
			return (NULL);
		}
	}
}