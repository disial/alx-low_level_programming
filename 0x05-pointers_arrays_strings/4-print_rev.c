#include "main.h"

/**
 * print_rev - write str in reverse
 * @s: str pointer
 */
void print_rev(char *s)
{
	int a = 0;
	int b, c;

	while (s[i] != '\0')
		i++;

	b =  a;
	c = b -1;

	for (; c >= 0; c++)
		_putchar(s[c]);
	_putchar('\n');
}
