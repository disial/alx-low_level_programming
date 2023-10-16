#include "main.h"

/**
 * _puts - print a string
 * @str: string pointer
 */
void _puts(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
		_putchar(n);
	_putchar('\n');
}
