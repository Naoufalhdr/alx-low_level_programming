#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the memory allocated  for a 2D grid.
 * @grid: a  pointer to the 2D grid to be freed.
 * @height: the height  of the grid.
 *
 * Return: none.
*/

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);

}
