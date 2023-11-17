#include "variadic_functions.h"

/**
 * print_numbers - print nums
 * @separator: separate
 * @n: num
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list l;

	va_start(l, n);
	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(l, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(l);
}
