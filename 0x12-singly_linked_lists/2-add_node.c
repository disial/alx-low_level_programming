#include "lists.h"

/**
 * add_node - add new node
 * @head: ptr address
 * @str: data address
 * Return: Adress or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *cont;

	if (head != NULL && str != NULL)
	{
		cont = malloc(sizeof(list_t));
		if (cont == NULL)
			return (NULL);
		cont->str = strdup(str);
		cont->len = _slen(str);
		cont->next = *head;
		*head = cont;
		return (cont);
	}
	return (0);
}
