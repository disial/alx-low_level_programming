#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concat two strings
 * @s1: char pointer
 * @s2: char pointer
 * @n: unsigned int
 * Return: NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;
	char *temp, *dest;

	temp = "";
	if (!s1)
		s1 = temp;
	if (!s2)
		s2 = temp;
	for (i = 0; s1[i] != 0; i++)
		;
	j = (i + n) * sizeof(*dest);
	dest = malloc(j + 1);
	if (!dest)
		return (NULL);
	for (k = 0; k < j && s1[k] != '\0'; k++)
	{
		dest[k] = s1[k];
	}
	l = 0;
	while (k < j && s2[l] != '\0')
	{
		dest[k] = s2[l];
		k++;
		l++;
	}
	dest[k] = '\0';
	return (dest);
}
