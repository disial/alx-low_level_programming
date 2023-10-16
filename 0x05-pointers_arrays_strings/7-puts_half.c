#include "main.h"

/**
 * puts_half - print half of str
 * @str: str pointer
 */
void puts_half(char *str)
{
	int i, j;
	int k = 0;

	while (str[k] != '\0')
		k++;
	if (k % 2 == 0)
	{
		for (i = k / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
	} else if (k % 2)
	{
		for (j = (k -1) / 2; j < k - 1; j++)
			_putchar(str[j + 1]);
	}
}
