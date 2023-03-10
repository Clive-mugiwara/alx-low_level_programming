#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Entry point
 * Description: Frees a 2-D grid previously created by your alloc_grid function
 * @grid: Integer
 * @height: Integer
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
		/* Free each row of the grid */
	}
	free(grid);
	/* Frees the grid */
}
