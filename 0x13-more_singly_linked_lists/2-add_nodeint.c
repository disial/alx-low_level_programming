#include "lists.h"

/**
 * add_nodeint - add new node
 * @head: node head
 * @n: int
 * Return: address of new elem of NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *dest;

	dest = *head;
	dest = malloc(sizeof(listint_t));
	if (dest == NULL)
		return (NULL);
	dest->n = n;
	dest->next = *head;
	*head = dest;
	return (*head);
}
