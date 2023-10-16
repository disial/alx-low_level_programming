#include <stdio.h>
#include "main.h"

/**
 * print_array - print int arrays
 * @a: int pointer
 * @n: int
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n-1))
			printf(", ");
	}
	printf("\n");
}
