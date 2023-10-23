#include "main.h"

/**
 * print_chessboard - chessboard
 * @a: pointer
 */
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j;

	for (; i < 8; i++)
	{
		j = 0;
		for (; j < 8; j++)
		{
			if (j == 7)
			{
				_putchar(a[i][j]);
				_putchar('\n');
			}
			else
				_putchar(a[i][j]);
		}
	}
}
