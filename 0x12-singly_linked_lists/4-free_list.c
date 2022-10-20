#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list.
 * @head: pointer to list_t list
 */

void free_list(list_t *head)
{
	list_t *f;

	while (head)
	{
		f = head->next;
		free(head->str);
		free(head);
		head = f;
	}
}
