#include "variadic_functions.h"

/**
 * print_strings - print str
 * @separator: separate
 * @n: int
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *temp;
	va_list l;

	va_start(l, n);
	i = 0;
	while (i < n)
	{
		temp = va_arg(l, char*);
		if (!temp)
			printf("(nil)");
		else
			printf("%s", temp);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(l);
}
