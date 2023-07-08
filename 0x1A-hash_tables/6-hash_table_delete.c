#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table
 * @ht: the hash table
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	hash_node_t *prenode;
	unsigned long int i = 0;

	if (ht == NULL)
	{
		free(ht);
		return;
	}
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node)
		{
			prenode = node;
			node = node->next;
			free(prenode->key);
			free(prenode->value);
			free(prenode);
		}
		free(node);
		i++;
	}
	free(ht->array);
	free(ht);
}
