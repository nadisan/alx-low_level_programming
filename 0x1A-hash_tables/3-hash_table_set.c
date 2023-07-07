#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: the value associated with the key
 * value must be duplicated. value can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = 0;
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (node == NULL)
		return (0);
	strcpy(node->key, key);
	strcpy(node->value, value);
	node->next = NULL;

	if (ht->array[i] == NULL)
	{
		ht->array[i] = node;
		return (1);
	}
	while (i < ht->size)
	{
		i++;
		if (ht->array[i] == NULL)
		{
			ht->array[i] = node;
			return (1);
		}
	}
	return (0);
}
