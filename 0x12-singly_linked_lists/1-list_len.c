#include "lists.h"

/**
 * print_list - prints all the elements of a list_t
 * @h: a list_t
 *
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
