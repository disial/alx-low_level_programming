#include <stdio.h>
/**
 * main - main function
 * Return: 0
 * n: int
 */
int main(void)
{
	int n = '0';

	while (n <= '8')
	{
		putchar(n);
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar('9');
	return (0);
}
