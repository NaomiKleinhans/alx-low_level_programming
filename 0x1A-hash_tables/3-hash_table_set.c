#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table
 * @ht: The hash table
 * @key: The key of the new element
 * @value: The value of the new element
 *
 * Return: 1 on success, 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new = NULL;
	hash_node_t *tmp= NULL;

	if (!ht || !key || !(*key) || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[index];

	/* check if key exists */
	while (tmp && strcmp(tmp->key, key) != 0)
		tmp = tmp->next;

	/* update value if key already exists */
	if (tmp)
	{
		free(tmp->value);
		tmp->value = strdup(value);
		return (1);
	}

	/* add new node if key not found */

	new = malloc(sizeof(*new));
	if (!new)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);

	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
