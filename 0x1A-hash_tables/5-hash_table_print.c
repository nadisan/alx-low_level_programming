#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table
 * @ht: hash table
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	unsigned long int i = 0, j = 0;

	if (ht == NULL)
		return;
	printf("{");
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if(node->next == NULL)
				printf("\'%s\': \'%s\'", node->key, node->value);
			else
				printf("\'%s\': \'%s\',", node->key, node->value);
			node = node->next;
		}
		while (!ht->array[i + 1])
			i++;
		if (j && i < ht->size)
			printf(", ");
		else
			j = 1;
		i++;

	}
	printf("}\n");
}
