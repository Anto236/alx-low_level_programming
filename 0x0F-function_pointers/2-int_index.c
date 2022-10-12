#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array to be searched
 * @size: the size of array to be searched
 * @cmp: pointer to a function which searches for int
 * Return: returns first index element if cmp doesnt return 0
 * -1 when no element matches or size is negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	for (i = 0; i < size; i++)
	{
		if (size <= 0)
			return (-1);

		if (cmp(array[i]))
			return (i);
	}
	return (-1);

}
