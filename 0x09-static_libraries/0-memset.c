#include "main.h"

/**
 * _memset - fills mem area with constant byte
 * @s: pointer
 * @b: char var
 * @n: unsigned int var
 * Return: Pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
