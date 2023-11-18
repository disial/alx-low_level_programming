#include "lists.h"

/**
 * add_node_end - add node
 * @head: node
 * @str: str
 * Return: address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nlist, *cont;

	if (str != NULL)
	{
		nlist = malloc(sizeof(list_t));
		if (nlist == NULL)
			return (NULL);
		nlist->str = strdup(str);
		nlist->len = _slen(str);
		nlist->next = NULL;
		if (*head == NULL)
		{
			*head = nlist;
			return (*head);
		}
		else
		{
			cont = *head;
			for (; cont->next;)
			{
				cont = cont->next;
			}
			cont->next = nlist;
			return (cont);
		}
	}
	return (NULL);
}


/**
 * _slen - str len
 * @str: str
 * Return: srtr
 */
int _slen(const char *str)
{
	int i;

	for (i = 0; *str;)
	{
		str++;
		i++;
	}
	return (i);
}
