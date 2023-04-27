#include "lists.h"

/**
 * print_list - prints all the elements of a list_t
 * @h: a list_t
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[%i] %s\n", 0, "(nil)");
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
