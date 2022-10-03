#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatinates two strings
 * @s1: first string to concatinate
 * @s2: second string to concatinate
 * Return: a pointer to concatinated string
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i = 0, j = 0, k = 0, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	l = i + j;
	s3 = (char *) malloc(l * (sizeof(char) + 1));
	if (s3 == NULL)
		return (NULL);
	j = 0;
	while (k < l)
	{
		if (k < i)
			s3[k] = s1[k];
		if (k >= i)
		{
			s3[k] = s2[j];
			j++;
		}
		k++;
	}
	s3[k] = '\0';
	return (s3);
}
