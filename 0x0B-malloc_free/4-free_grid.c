#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free grid
 * @grid: pp int
 * @height: int
 */
void free_grid(int **grid, int height)
{
	while (height-- > 0)
		free(grid[height]);
	if (!grid || !grid[0])
		return;
	free(grid);
}
