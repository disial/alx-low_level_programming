#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main func
 * @argc:  var count
 * @argv: arg vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;

	if (argc == 1 || argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	return (0);
	}
}
