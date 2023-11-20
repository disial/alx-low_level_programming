#include "lists.h"

/**
 * free_listint2 - free list
 * @head: list head
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *dest;

	if (head == NULL)
		return;
	dest = *head;
	for (; dest != NULL;)
	{
		temp = dest;
		dest = dest->next;
		free(temp);
	}
	*head = NULL;
}
