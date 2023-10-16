#include "main.h"

/**
 * _puts - print a string
 * @str: string pointer
 */
void _puts(char *str)
{
	int n = 0;

	for (; str[n] != '\0'; n++)
		_putchar(str[n]);
	_putchar('\n');
}
