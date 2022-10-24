#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - returns the sum of all data (n) of listint_t linked list
 * @head: pointer to list
 * Return: if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int s = 0;

	while (node)
	{
		s += node->n;
		node = node->next;
	}
	return (s);
}
