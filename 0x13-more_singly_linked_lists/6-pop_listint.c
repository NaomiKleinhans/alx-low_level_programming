#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - deletes head node of listint_t linked list.
 * @head: pointer to list
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int del;

	if (*head == NULL)
		return (0);

	node = *head;
	del = (*head)->n;
	*head = (*head)->next;

	free(node);

	return (del);
}
