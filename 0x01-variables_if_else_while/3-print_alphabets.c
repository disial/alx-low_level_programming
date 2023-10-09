#include <stdio.h>
/**
 * main - function main
 * Return: 0
 * alpha_lower: type char
 * alpha_upper: type char
 */
int main(void)
{
	char alpha_lower = 'a';
	char alpha_upper = 'A';

	while (alpha_lower <= 'z')
	{
		putchar(alpha_lower);
		alpha_lower++;
	}
	while (alpha_upper <= 'Z')
	{
		putchar(alpha_upper);
		alpha_upper++;
	}
	putchar('\n');
	return (0);
}
