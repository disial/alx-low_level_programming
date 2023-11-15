#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - 2D array
 * @width: int pointer
 * @height: int pointer
 * Return: NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j, **pp;

	if (width <= 0 || height <= 0)
		return (NULL);
	pp = malloc(height * sizeof(int *));
	if (pp == NULL)
		return (NULL);
	i = 0;
	while (i < height)
	{
		pp[i] = malloc(width * sizeof(int));
		if (pp[i] == NULL)
		{
			while (i >= 0)
				free(pp[i--]);
			free(pp);
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			pp[i][j] = 0;
			j++;
		}
		i++;
	}
	return (pp);
}
