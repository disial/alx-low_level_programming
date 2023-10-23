#include "main.h"

/**
 * _strspn - get length prefix substring
 * @s: pointer
 * @accept: pointer
 *
 * Return: Number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int k;
	
	for (; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (k = 0; accept[k] != '\0'; k++)
			{
				if (s[i] == accept[k])
					j++;
			}
		}
		else
			return (j);
	}
	return (j);
}
