#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to list
 * @index: index of the node, starting at 0
 * Return: if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;

	unsigned int i = 0;

	while (head)
	{
		temp = head;
		if (i == index)
		return (temp);
		head = head->next;
		i++;
	}
	return (NULL);
}
