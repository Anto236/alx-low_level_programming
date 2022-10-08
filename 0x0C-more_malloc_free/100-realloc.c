#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates memory block using malloc
 * @ptr: pointer to previous allocated memory
 * @old_size: previously allocated memory
 * @new_size: newly allocated memory size
 * Return: ptr
 * if new size == old sie return ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size == old_size)
		return (ptr);
	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
