#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - search byte set in str
 * @s: pointer
 * @accept: pointer
 *
 * Return: Pointer to s
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == *s)
				return (s);
		}
		s++;
	}
	return (NULL);
}
