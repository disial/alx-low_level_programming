#include "main.h"

/**
 * factorial - factorial func
 * @n: int
 * Return: 0 or factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n > 0)
		return (n * factorial(n - 1));
	else
		return (1);
}
