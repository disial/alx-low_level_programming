#include "main.h"

/**
 * leet - encode
 * @n: str
 * Return: encoded str n
 */
char *leet(char *n)
{
	int j = 0;
	int k;
	char *l = "aAeEoOtTlL";
	char *m = "4433007711";

	for (; n[j] != '\0'; j++)
		for (k = 0; k < 10; k++)
			if (n[j] == l[k])
				n[j] = m[k];
	return (n);
}
