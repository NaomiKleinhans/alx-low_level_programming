#include "lists.h"

/**
 * dlistint_len - returns number of elements in list
 * @h: head of list
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h);
{
        int elem;

        elem = 0;

        if (h == NULL)
                return (elem);

        while (h->prev != NULL)
                h = h->prev;

        while (h != NULL)
        {
                elem++;
                h = h->next;
        }

        return (elem);
}
