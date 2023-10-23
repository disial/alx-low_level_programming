#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: dest pointer
 * @src: src pointer
 * @n: unsigned int
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j = 0;

	for (; j < n; j++)
		dest[j] = src[j];
	return (dest);
}
