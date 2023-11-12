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
	int i = 0;
	int sum;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else if (argc > 1)
	{
		sum = 0;
		for (i = 1; i <= argc - 1; i++)
		{
			if (atoi(argv[i]) == 0 && argv[i][0] != '0')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
