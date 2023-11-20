#include "lists.h"

/**
 * sum_listint - return sum of all the data (n) of listint_t linked list
 * @head: head node
 * Return: sum data or 0
 */
int sum_listint(listint_t *head)
{
	int i = 0;

	while (head)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
