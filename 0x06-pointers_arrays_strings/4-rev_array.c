#include "main.h"

/**
 * reverse_array - reverse to int
 * @a: array
 * @n: var
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j;

	for (; i < (n / 2); i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
}
