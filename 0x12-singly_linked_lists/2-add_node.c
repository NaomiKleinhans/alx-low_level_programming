#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to start of list
 * @str:string to initialize node
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t elmnt = 0;

	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->next = *head;
	new->str = strdup(str);
	if (new->str)
		while (new->str[elmnt])
			++elmnt;
	new->len = elmnt;
	*head = new;
	return (new);
}
