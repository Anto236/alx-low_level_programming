#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate memory with malloc
 * if string is empty, exit with 98
 * @b: number of bytes to be allocated
 * Return: Pointer tollovated string
 */
void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);

	if (str == NULL)
		exit(98);

	return (str);
}
