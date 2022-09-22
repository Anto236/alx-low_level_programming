#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: sting to be added
 * @n: amount of bytes used from src
 * Return: Returns a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
