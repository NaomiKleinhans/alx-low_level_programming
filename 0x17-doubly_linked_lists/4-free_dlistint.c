#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of the list
 * Return: no return
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *lst;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((lst = head) != NULL)
	{
		head = head->next;
		free(lst);
	}
}