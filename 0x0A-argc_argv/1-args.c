#include "main.h"
#include <stdio.h>
/**
 * main - main func
 * @argc:  var count
 * @argv: arg vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argv[0] != 0)
		printf("%d\n", argc - 1);
	return (0);
}
