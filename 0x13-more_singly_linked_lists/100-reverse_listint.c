#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to list
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *f_node, *s_node;

	if (head == NULL || *head == NULL)
		return (NULL);

	s_node = NULL;

	while ((*head)->next != NULL)
	{
		f_node = (*head)->next;
		(*head)->next = s_node;
		s_node = *head;
		*head = f_node;
	}

	(*head)->next = s_node;

	return (*head);
}
