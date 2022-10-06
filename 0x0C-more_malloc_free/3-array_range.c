#include "main.h"
#include <stdlib.h>
/**
 * array_range - create an array of integers
 * @min: minimum range
 * @max: maximum range
 * Return: pointer to an arrray of integers
 */
int *array_range(int min, int max)
{
	int *p;
	int i, j;

	if (min > max)
		return (NULL);

	j = max - min + 1;
	p = malloc(sizeof(int) * j);

	if (p == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
		p[i] = min++;
	return (p);
}
