#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - pointer func
 * @c: pointer char
 * @size: of array
 * Return: NULL
 */
char *create_array(unsigned int size, char c)
{
	char *str = malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0)
		return (NULL);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
