#include "main.h"

/**
 * free_grid - a function that frees a two dimensional grid
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
