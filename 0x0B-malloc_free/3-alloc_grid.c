#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * alloc_grid - allocates memory for  a 2D array of integers.
 * @width: the width of the grid.
 * @height: the  height of the grid.
 *
 * Return: a pointer to the newly allocated 2D array of integers,
 *         or NULL if:
 *         memory allocation fails or if width or height is 0 or negative.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width < 0 || height < 0)
		return (NULL);

	grid = malloc(height * sizeof(int));

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			grid[i] = malloc(width * sizeof(int));
			if (grid[i] != NULL)
			{
				for (j = 0; j < width; j++)
					*(*(grid + i) + j) = 0;
			}
			else
				return (NULL);
		}
	}
	else
		return (NULL);
	return (grid);
}
