#include "function_pointers.h"
/**
 * array_iterator - executes a functiom given as
 * parameter on each element of array
 * @array: pointer to array containing size elements
 * @size: number of elements on the array
 * @action: pointer to funcn for iterating
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
