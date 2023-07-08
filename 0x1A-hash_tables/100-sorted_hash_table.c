#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * shash_table_create - a function that creates a shash table
 * @size: is the size of the array
 * Return: a pointer to the newly created hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *h = malloc(sizeof(shash_table_t));
	/*shash_node_t *shead = NULL;
	shash_node_t *stail = NULL;*/
	unsigned long int i = 0;

	if (h == NULL)
		return (NULL);
	h->size = size;
	h->array = malloc(sizeof(shash_node_t *) * size);
	if (h->array == NULL)
		return (NULL);
	while (i < size)
	{
		h->array[i] = NULL;
		i++;
	}
	return (h);
}

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = 0;
	shash_node_t *node = NULL;
	shash_node_t *new = NULL;

	if (key == NULL || value == NULL || ht == NULL || (strcmp("", key) == 0))
		return (0);
	i = key_index((unsigned char *)key, ht->size);
	node =   ht->array[i];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			if (strcmp(value, node->value) != 0)
			{
				free(node->value);
				node->value = strdup(value);
			}
			return (1);
		}
		node = node->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	if (new->key == NULL || new->value == NULL)
	{
		free(new->key);
		free(new->value);
		free(new);
		return (0);
	}
	new->next = ht->array[i];
	ht->array[i] = new;
	return (1);
}
