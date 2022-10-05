#include"main.h"

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: 2D grid
 * @height: no of rows in grid
 * Return: none
 */

void free_grid(int **grid, int height)
{
	int i, j;

	for (i = 0; i < height; i++)
	{
		if (grid[i] == NULL)
		{
			for (j = 0; j <= i; j++)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
	}
}
