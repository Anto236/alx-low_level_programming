#include "main.h"
/**
 * _memcpy - function copies n byte from memory area src to memory area dest
 * @dest: destination string
 * @src: source string
 * @n: number of times to copy
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
