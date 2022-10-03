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
	unsigned int i = 0, j;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
		i++;
	dup = (char *) malloc(sizeof(char) * (i + 1));
	if (dup == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		dup[j] = str[j];
	return (dup);
}
