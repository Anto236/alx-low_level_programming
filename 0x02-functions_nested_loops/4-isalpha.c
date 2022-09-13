#include "main.h"
/**
 * _isalpha - shows 1 if its a letter. Otherwise 0.
 * @c: the character to be checked
 * Return: 1 for letters. 0 for the rest.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
