#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * shash_table_delete - a function that deletes a hash table
 * @ht: the hash table
 *
 */



void shash_table_delete(shash_table_t *ht)
{	
	shash_node_t *node;
	shash_node_t *prenode;
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
