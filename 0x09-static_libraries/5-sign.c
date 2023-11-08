#include "main.h"

/**
 * print_sign - print sign
 * @n: integer
 *
 * Return: 1, 0 and -1
 */
int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		_putchar('+');
		i = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		i = 0;
	}
	else
	{
		_putchar('-');
		i = -1;
	}
	return (i);
}
