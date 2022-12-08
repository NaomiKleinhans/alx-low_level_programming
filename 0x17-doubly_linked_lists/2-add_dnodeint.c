#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of dlistint_t list
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nnode;
	dlistint_t *h;

	new = malloc(sizeof(dlistint_t));
	if (nnode == NULL)
		return (NULL);

	nnode->n = n;
	nnode->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	nnode->next = h;

	if (h != NULL)
		h->prev = nnode;

	*head = nnode;

	return (nnode);
}
