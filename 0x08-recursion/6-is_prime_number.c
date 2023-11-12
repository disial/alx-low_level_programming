#include "main.h"

/**
 * _prime_check - check for prime
 * @n: num int
 * @i: num int
 * Return: 0 or 1
 */
int _prime_check(int i, int n)
{
	if (n % i == 0 || n < 2)
		return (0);
	if (i == n - 1)
	{
		return (1);
	}
	if (n > i)
	{
		return (_prime_check(i + 1, n));
	}
	return (1);
}
/**
 * is_prime_number - check prime
 * @n: num int
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	return (_prime_check(2, n));
}
