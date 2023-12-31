#include "function_pointers.h"

/**
 * print_name - func
 * @name: name
 * @f: func ptr
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
