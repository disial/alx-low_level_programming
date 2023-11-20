#include "lists.h"

/**
 * pop_listint - delete head node
 * @head: head node
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp, *dest;
	int i;

	if (head == NULL)
		return (0);
	temp = *head;
	dest = *head;
	if (*head)
	{
		i = dest->n;
		*head = dest->next;
		free(temp);
	}
	else
		i = 0;
	return (i);
}
