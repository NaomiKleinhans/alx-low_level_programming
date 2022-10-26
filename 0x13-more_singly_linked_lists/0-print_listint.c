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
	size_t elmnt = 0;

	const listint_t = h;

	while (h)
	{
		printf("%d\n", h->n);
		elmnt++;
		h = h->next;
	}
	return (elmnt);
}
