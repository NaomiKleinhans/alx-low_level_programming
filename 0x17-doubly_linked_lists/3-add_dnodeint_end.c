#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of list
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *nnode;

	nnode = malloc(sizeof(dlistint_t));
	if (nnode == NULL)
		return (NULL);

	nnode->n = n;
	nnode->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = nnode;
	}
	else
	{
		*head = nnode;
	}

	nnode->prev = h;

	return (nnode);
}
