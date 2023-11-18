#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - main func
 * @argc:  var count
 * @argv: arg vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int j, k;
	char *str;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			str = argv[i];
			for (k = 0; k < strlen(str); k++)
			{
				if (str[k] < 48 || str[k] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			j += atoi(str);
			str++;
		}
		printf("%d\n", j);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
