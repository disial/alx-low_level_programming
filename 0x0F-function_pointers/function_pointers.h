#ifndef _FUNC_PTR_H_
#define _FUNC_PTR_H_
#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
#endif
