#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index -  deletes node at index of a linked list
 * @head: pointer to list
 * @index: index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prev;
	listint_t *nxt;

	if (head == NULL || *head == NULL)
		return (-1);

	nxt = *head;
	prev = NULL;
	if (index == 0)
	{
		*head = (*head)->next;
		free(nxt);
		return (1);
	}

	for (i = 0; i < index; i+= 1)
	{
		if (nxt == NULL)
			return (-1);

		prev = nxt;
		nxt = nxt->next;
	}
	if (prev)
		prev->next = nxt->next;
	free(nxt)
		return (1);
}
