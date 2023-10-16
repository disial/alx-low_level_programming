#include "main.h"

/**
 * swap_int - function that swaps two ints
 * @a: integer one pointer
 * @b: integer two poinetr
 * @n: int var
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
