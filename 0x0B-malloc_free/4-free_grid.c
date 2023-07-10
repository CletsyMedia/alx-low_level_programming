#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2-D grid previously created by alloc_grid.
 * @grid: Pointer to the grid to free.
 * @height: Height of the grid.
 */
void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; n++)
	{
	free(grid[n]);
	}
	free(grid);
}
