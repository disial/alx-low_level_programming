#ifndef _VARIADIC_FUNCTION_H_
#define _VARIADIC_FUNCTION_H_
#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void _char(va_list l);
void _int(va_list l);
void _f(va_list l);
void _str(va_list l);

/**
 * format_types - types
 */
typedef struct check_format
{
	char *type;
	void (*f)();
} check_format;

#endif
