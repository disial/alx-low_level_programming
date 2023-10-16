#include "main.h"

/**
 * *_strcpy - pointer function
 * @dest: str pointer
 * @src: str pointer
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int j = 0;

	for (; src[j] != '\0'; j++)
		dest[j] = src[j];
	dest[j++] = '\0';
	return (dest);
}
