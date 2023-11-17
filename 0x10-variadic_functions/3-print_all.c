#include "variadic_functions.h"

/**
 * _char - char func
 * @l: list
 */
void _char(va_list l)
{
	printf("%c", va_arg(l, int));
}

/**
 * _str - str
 * @l: list
 */
void _str(va_list l)
{
	char *str;

	str = va_arg(l, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * _f - float
 * @l: list
 */
void _f(va_list l)
{
	printf("%f", va_arg(l, double));
}

/**
 * _int - int
 * @l: list
 */
void _int(va_list l)
{
	printf("%d", va_arg(l, int));
}

/**
 * print_all - print all
 * @format: format
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	va_list args;
	char *separator;

	check_format format_types[] = {
		{ "c", _char },
		{ "s", _str },
		{ "f", _f },
		{ "i", _int}
	};
	va_start(args, format);
	i = 0;
	separator = "";
	while (format != NULL && format[i / 4] != '\0')
	{
		j = i % 4;
		if (format_types[j].type[0] == format[i / 4])
		{
			printf("%s", separator);
			format_types[j].f(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
