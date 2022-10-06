#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concate string 2 to 1
 * Return: memory of concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int index, len = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (index = 0; s1[index]; index++)
		len++;
	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
	return (NULL);

	len = 0;
	for (index = 0; s1[index]; index++)
	{
		concat[len++] = s1[index];
	}
	for (index = 0; s2[index] && index < n; index++)
	{
		concat[len++] = s2[index];
	}
	concat[len] = '\0';
	return (concat);
}
