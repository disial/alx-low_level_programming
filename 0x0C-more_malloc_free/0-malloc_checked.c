#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - memory allocate
 * @b: unsigned int
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	int *temp;

	temp = malloc(b);
	if (temp == NULL)
		exit(98);
	return (temp);
}
