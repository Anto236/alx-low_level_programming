#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates str
 * @str: string to be copied
 * Return: a pointer to a new string which is a duplicate of str
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i = 0;

	if (*str == '\0')
	{
		return (NULL);
	}
	dup = malloc(sizeof(char *));

	if (dup == NULL)
	{
		return (NULL);
	}
	while ((dup[i] = str[i]) != '\0')
	{
		i++;
	}
	return (dup);
}
