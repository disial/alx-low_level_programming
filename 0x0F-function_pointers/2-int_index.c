#include "function_pointers.h"

/**
 * int_index - int search
 * @array: array
 * @size: size
 * @cmp: cmp
 * Return: int  or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (i = 0; i < size;)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}
	return (-1);
}
