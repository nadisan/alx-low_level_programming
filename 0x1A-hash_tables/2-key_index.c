#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - a function that gives you the index of a key
 * @key:  is the key
 * @size: the size of the array of the hash table
 * Return: Always EXIT_SUCCESS.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
