#include "hash_tables.h"

/**
 * hash_table_print - prints the keys and values of the hash table
 *
 * @ht: pointer to the hash table
 * Return: no return
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	char *comma_flag;

	if (ht == NULL)
		return;

	printf("{");
	comma_flag = "";

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			printf("%s'%s': '%s'", comma_flag, tmp->key, tmp->value);
			comma_flag = ", ";
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
