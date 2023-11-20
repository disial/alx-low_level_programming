#include "lists.h"

/**
 * add_nodeint_end - add node
 * @head: node potr
 * @n: int
 * Return: new elem address or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *dest, *temp;

	dest = malloc(sizeof(listint_t));
	if (dest == NULL)
		return (NULL);
	dest->n = n;
	dest->next = NULL;
	if (*head == NULL)
	{
		*head = dest;
		return (*head);
	}
	temp = *head;
	for (; temp->next != NULL;)
	{
		temp = temp->next;
	}
	temp->next = dest;
	return (*head);
}
