#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: elements in an array
 * @size: bytes in elements of the array
 * Return: pointer to an element
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;;
	unsigned int i, j;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);
	j = nmemb * size;
	for (i = 0; i < j; i++)
		p[i] = 0;
	return (p);
}
