#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - str concact
 * @s1: str pointer
 * @s2: str pointer
 * Return: NULL
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j;
	char *temp, *dest;

	temp = s1;
	if (s1 == NULL)
		s1 = "";
	else if (s1 != NULL)
		while (*temp++)
			i++;
	temp = s2;
	if (s2 == NULL)
		s2 = "";
	else if (s2 != NULL)
		while (*temp++)
			j++;
	dest = malloc(i + j + 1);
	temp = dest;
	if (dest == NULL)
		return (NULL);
	while (*s1)
		*temp++ = *s1++;
	while (*s2)
		*temp++ = *s2++;
	*temp = 0;
	return (dest);
}
