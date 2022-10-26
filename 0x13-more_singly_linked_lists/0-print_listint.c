#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: Pointer to the listint_t list
 *
 * Return: number of nodes in list_t list
 */

size_t print_listint(const listint_t *h)
{

	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
