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
	int i;

	if (min  > max)
		return (NULL);
	dest = malloc((max - min + 1) * sizeof(int));
	if (!dest)
		return (NULL);
	i = 0;
	while (min <= max)
	{
		dest[i] = min;
		min++;
		i++;
	}
	return (dest);
}
