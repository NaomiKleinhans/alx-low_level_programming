#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: linked list_t list
 *
 * Return: Number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t elmnt;

	elmnt = 0;

	while (h)
	{
		elmnt++;
		h = h->next;
	}
	return (elmnt);
}
