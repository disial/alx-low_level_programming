#include "main.h"
#include <stdio.h>

/**
 * _strchr - locate string
 * @s: pointer
 * @c: var char
 *
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	int j = 0;

	while ((s[j] != c) && (s[j] != '\0'))
		j++;
	if (s[j] == c)
		return (s + j);
	else
		return (NULL);
}
