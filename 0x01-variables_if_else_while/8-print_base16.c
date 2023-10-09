#include <stdio.h>
/**
 * main - main function
 * Return: 0
 * base_16_int: int
 * base_16_char: char
 */
int main(void)
{
	int base_16_int = '0';
	char base_16_char = 'a';

	while (base_16_int <= '9')
	{
		putchar(base_16_int);
		base_16_int++;
	}
	while (base_16_char <= 'f')
	{
		putchar(base_16_char);
		base_16_char++;
	}
	putchar('\n');
	return (0);
}
