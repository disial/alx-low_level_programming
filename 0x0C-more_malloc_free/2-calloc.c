#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocate mem
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: ptr or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *dest;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	dest = malloc(nmemb * size);
	if (!dest)
		return (NULL);
	for (i = 0; i < nmemb * size;)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
