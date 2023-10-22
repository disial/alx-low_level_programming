#include "main.h"

/**
 * _isalpha - check alpha is lower
 * @c: var int
 *
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
