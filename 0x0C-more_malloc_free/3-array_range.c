#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - create arrays of int
 * @min: int
 * @max: int
 * Return: ptr or NULL
 */
int *array_range(int min, int max)
{
	int *dest;
	int i, j;

	if (min  > max)
		return (NULL);
	dest = malloc(((max - min) + 1) * sizeof(int));
	i = 0;
	j = min;
	while (j <= max)
	{
		dest[i] = j;
		i++;
		j++;
	}
	return (dest);
}
