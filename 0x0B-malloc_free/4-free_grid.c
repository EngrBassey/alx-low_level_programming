#include "main.h"
#include <stdlib.h>

/**
  * free_grid - funtion that free memory
  * @grid: pointer pointing to the memory
  * @height: array row
  *
  */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
