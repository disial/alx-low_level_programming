#include "function_pointers.h"

/**
 * array_iterator - func of func
 * @array: array
 * @size: size
 * @action: action
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	i = 0;
	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
