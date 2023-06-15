#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print double linked listint
 * @h: double linked listint
 * Return: number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while(h != NULL)
	{
		printf ("%i\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
