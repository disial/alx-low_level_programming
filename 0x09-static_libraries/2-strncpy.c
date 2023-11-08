#include "main.h"

/**
 * _strncpy - function o copy str
 * @dest: str pointer
 * @src: str pointer
 * @n: str
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; n > i; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
