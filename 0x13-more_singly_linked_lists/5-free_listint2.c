#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to list
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
		return;

	while (*head)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}
	head = NULL;
}
