#include "lists.h"

/**
 * print_listint - print list elements
 * @h: nodes
 * Return: Nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
