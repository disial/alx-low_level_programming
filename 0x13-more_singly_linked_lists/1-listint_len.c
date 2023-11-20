#include "lists.h"

/**
 * listint_len - num of linked elems
 * @h: elem
 * Return: elems
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
