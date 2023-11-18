#include "lists.h"

/**
 * list_len - list length
 * @h: lis
 * Return: list elements
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	for (; h;)
	{
		h = h->next;
		i++;
	}
	return (i);
}
