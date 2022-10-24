#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)

{
	size_t nodes = 0;
	const listint_t *add_node = head;

	if (!head)
		exit(98);

	while (add_node)
	{
		printf("[%p] %i\n", (void *)add_node, add_node->n);
		add_node = add_node->next;
		nodes++;
	}
	return (nodes);
}
