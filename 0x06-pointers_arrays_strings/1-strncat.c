#include "main.h"

/**
 * _strncat - concat str
 * @dest: pointer str
 * @src: str pointer
 * @n: str
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	for (; dest[i] != '\0';)
		i++;
	for (; src[j] != '\0' && n > 0; j++, n--, i++)
		dest[i] = src[j];
	return (dest);
}
