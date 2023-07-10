#include "main.h"
#include <stdlib.h>

/**
*	free_grid - frees all the allocated memory
*	in the grid
*	@grid: grid to be freed
*	@height: amount of rows
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);

}
