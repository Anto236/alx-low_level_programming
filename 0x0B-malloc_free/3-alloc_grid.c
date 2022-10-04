#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - return pointer to two dimentional array
 * @width: length of row
 * @height: length of column
 * Return: pointer to array, and NULLon failure
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j, k, l;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	arr = malloc(height * sizeof(int *));
		if (arr == NULL)
		{
			free(arr);
			return (NULL);
		}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(arr[j]);
			}
			free(arr);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			arr[k][l] = 0;
		}
	}
	return (arr);
}
