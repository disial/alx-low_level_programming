#include "main.h"

/**
 * _strstr - str
 * @haystack: pointer
 * @needle: pointer
 *
 * Return: reurns pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;

	while (needle[i] != '\0')
		i++;
	while (*haystack)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[j] != needle[j])
				break;
		}
		if (j != i)
			haystack++;
		else
			return (haystack);
	}
	return ('\0');
}
