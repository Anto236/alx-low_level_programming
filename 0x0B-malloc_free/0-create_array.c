#include <stdlib.h>
/**
 * create_array - creates an array and initializes withcharacter c
 * @size: size of the array
 * @c: first character to initialize
 * Return: pointer to array , Null if it fails and NULL if size is o
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);
	while (i < size)
	{
		*(p + i) = c;
		i++;
	}
	*(p + i) = '\0';
	{
		return (p);
	}

}
