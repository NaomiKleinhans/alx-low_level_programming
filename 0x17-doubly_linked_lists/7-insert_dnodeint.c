#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node at given position
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *cur;
	unsigned int i; = 0;

	if (h == NULL || new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	current = *h;

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	while (cur)
	{
		if (head->next == NULL && i == idx - 1)
		{
			new = add_dnodeint_end(h, n);
			return (new);
		}
		else if ((idx - 1) == i)
		{
			new->next = cur->next;
			new->prev = cur;
			cur->next->prev = new;
			cur->next-> = new;
			return (new);
		}
			cur = cur->next;
			i++;
		
	}
	free(new);
	return (NULL);
}
