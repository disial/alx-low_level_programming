#include "main.h"

/**
 * _sqrt_recursion - sqrt func
 * @n: int num
 * @i: num int
 * Return: sqr or -1
 */
int nsqr(int n, int i);
int _sqrt_recursion(int n)
{
	return (nsqr(1, n));
}

/**
 * nsqr - sqr func check
 * @n: int num
 * @i: int i
 * Return: sqr or -1
 */
int nsqr(int n, int i)
{
	if (n * n == i)
		return (n);
	if (n * n > i)
		return (-1);
	else
		return (nsqr(n + 1, i));
}
