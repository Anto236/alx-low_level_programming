#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all arguments in
 * program and each argument followed by new line
 * @ac: count of arguments
 * @av: pointer to a string of arrays passed as arguments
 * Return: NULL if ac==0 or av==NULL, pointer to new string and NULL if fail.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, p = ac;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			p++;
	}

	str = malloc(sizeof(char) * p + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[p] = '\0';
	return (str);
}
