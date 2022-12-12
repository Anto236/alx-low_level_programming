#include "main.h"
#include <string.h>
/**
 * _strncpy - function that copies a string
 * @dest: destination
 * @src: source
 * @n: number of bytes to copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
