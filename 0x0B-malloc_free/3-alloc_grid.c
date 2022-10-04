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
	int i, j;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	arr = (int **) malloc(sizeof(int *) * height);
		if (arr == NULL)
			free(arr);
			return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *) malloc(sizeof(int) * width);
		if (arr[i] == NULL)
			free(a[i]);
			return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
