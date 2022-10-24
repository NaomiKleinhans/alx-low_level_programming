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
	listint_t *del, *copy = *head;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;
	}
	del = copy->next;
	copy->next = del->next;
	free(del);
	return (-1);
}
