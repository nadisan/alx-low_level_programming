#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t
 * @h: listint_t
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%i\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
