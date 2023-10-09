#include <stdio.h>
/**
 * main - function main
 * Return: 0
 * ch: reverse string
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
