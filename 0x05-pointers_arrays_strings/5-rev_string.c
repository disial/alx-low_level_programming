#include "main.h"

/**
 * rev_string - revserse str pointer
 * @s: str pointer
 */
void rev_string(char *s)
{
	char temp;
	int i, n, m = 0;

	while (s[i] != '\0')
		i++;

	n = i - 1;

	for (; m < i / 2; m++)
	{
		temp = s[m];
		s[m] = s[n];
		s[n--] = temp;
	}
}
