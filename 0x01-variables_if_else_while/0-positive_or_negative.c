#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main - main function
 * Return: reurns 0
 * n: var of type int
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive")
	if else (n == 0)
		printf("%d is zero")
	else
		printf("d is negative")
	return (0);
}
