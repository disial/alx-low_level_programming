#include "main.h"

/**
 * leet - encode
 * @n: str
 * Return: encoded str n
 */
char *leet(char *n)
{
	int j = 0;

	for (; n[j] != '\0'; j++)
	{
		while (n[j] == 'a' || n[j] == 'A')
			n[j] = '4';
		while (n[j] == 'e' || n[j] == 'E')
			n[j] = '3';
		while (n[j] == 'o' || n[j] == 'O')
			n[j] = '0';
		while (n[j] == 't' || n[j] == 'T')
			n[j] = '7';
		while (n[j] == 'l' || n[j] == 'L')
			n[j] = '1';
	}
	return (n);
}
