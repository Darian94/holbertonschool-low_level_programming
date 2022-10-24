#include "main.h"

/**
 * free_grid - frees a greed
 * @grid: grid to free
 * @height: height of the grid
 * return: void
 */

void free_grid(int **grid, int height)
{
	int n;

	if (grid != NULL)
	{
		for  (n = height ;  n >= 0 ; n--)
		{
			free(grid[n]);
		}
		free(grid);
	}
}
