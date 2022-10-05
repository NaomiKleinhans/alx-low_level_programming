#include "main.h"

/**
 * free_grid - free a two dimensional array
 * @grid: memory blocked
 * @height: array height
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;
	
	for(i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
