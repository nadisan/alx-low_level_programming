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
	/**
	 * shash_node_t *shead = NULL;
	 * shash_node_t *stail = NULL;
	 */
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

/**
 * shash_table_set - insert key/value pair in sorted list
 * @ht: the hash table
 * @key: is the key
 * @value: is the value
 * Return: 1 if successful or 0 otherwise
 */

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

/**
 * shash_table_get - get value from key
 * @ht: the hash table
 * @key: is the key
 * Return: string with key value
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	if (ht == NULL || key == NULL)
		return (NULL);
	return ((char *)key);
}

/**
 * shash_table_print - a function that deletes a hash table
 * @ht: the hash table
 *
 */

void shash_table_print(const shash_table_t *ht)
{
	if (ht == NULL)
		return;
	printf("{}");
}

/**
 * shash_table_print_rev - a function that deletes a hash table
 * @ht: the hash table
 *
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	if (ht == NULL)
		return;
	printf("{}");
}
