#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to list
 * @ index: index of the node, starting at 0
 * Return: if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;

	unsigned int i = 0;

	while (node && i != index)
	{
		node = node->next;
		i++;
	}
	if (node && i == index)
		return (node);
	return (NULL);
}
