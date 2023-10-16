#include "main.h"

/**
 * _strlen - reurns the str len
 * @s: string
 * Return: Returns the str len
 */
int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
		n++;
	return (n);
}
