#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - str copy
 * @str: str pointer
 * Return: NULL, *str o success
 */
char *_strdup(char *str)
{
	int i = 0;
	char *temp, *dest;

	if (str == NULL)
		return (NULL);
	temp = str;
	while (*temp++)
		i++;
	dest = malloc(i + 1);
	if (dest == NULL)
		return (NULL);
	temp = dest;
	while (*str)
		*temp++ = *str++;
	*temp = 0;
	return (dest);
}
