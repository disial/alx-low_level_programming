#include <stdio.h>
/**
 * main - main function
 * Return: 0
 * ch: var of type char
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
