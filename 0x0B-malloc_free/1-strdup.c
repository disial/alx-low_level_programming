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
	int j;
	char *ch = (char *)malloc((i + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	if (ch == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		ch[j] = str[i];
	ch[i] = '\0';
	return (ch);
}
