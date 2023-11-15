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
	if (!s1)
		s1 = "";
	else if (s1)
		while (*temp++)
			i++;
	temp = s2;
	if (!s2)
		s2 = "";
	else if (s2)
		while (*temp++)
			j++;
	dest = malloc(i + j + 1);
	if (!dest)
		return (NULL);
	temp = dest;
	while (*s1)
		*temp++ = *s1++;
	while (*s2)
		*temp++ = *s2++;
	*temp = 0;
	return (dest);
}
