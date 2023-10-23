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
	int i;
	int j = 0;

	while (accept[j] != '\0')
		j++;
	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[i] != accept[i])
				break;
		}
		if (i != j)
			s++;
		else
			return (s);
	}
	return (NULL);
}
