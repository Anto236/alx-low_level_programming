#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees 2 dimentional grid
 * @grid: grid to free
 * @height: height of matrix
 * return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
