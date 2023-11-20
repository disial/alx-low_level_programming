#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at position n
 * @head: node head
 * @idx: index
 * @n: int
 * Return: new index
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *dest;

	temp = *head;
	dest = malloc(sizeof(listint_t));
	if (dest == NULL)
		return (NULL);
	dest->n = n;
	if (index == 0)
	{
		dest->next = temp->next;
		index--;
		if (temp == NULL)
		{
			free(dest);
			return (NULL);
		}
	}
	dest->next = temp->next;
	temp->next = dest;
	return (dest);
}
