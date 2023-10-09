#include <stdio.h>
/**
 * main - main function
 * Return: 0
 * n: number
 */
int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
