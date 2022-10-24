#include "main.h"

/**
 * free_grid - frees a greed
 * @grid: grid to free
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int n = height;

	if (grid != NULL)
	{
		while (n >= 0)
		{
			n--;
			free(grid[n]);
		}
		free(grid);
	}
}	

