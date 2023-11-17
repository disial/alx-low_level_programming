#include "variadic_functions.h"

/**
 * sum_them_all - sum
 * @n: int
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int j;
	va_list l;

	va_start(l, n);
	i = 0;
	j = 0;
	while (i < n)
	{
		j += va_arg(l, int);
		i++;
	}
	va_end(l);
	return (j);
}
