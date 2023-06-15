#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while(h)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return(i);
}
