#include "lists.h"

/**
 * free_list - free list
 * @head: ptr
 */
void free_list(list_t *head)
{
	list_t *cont;

	while (head)
	{
		cont = head;
		head = head->next;
		free(cont->str);
		free(cont);
	}
	free(head);
}
