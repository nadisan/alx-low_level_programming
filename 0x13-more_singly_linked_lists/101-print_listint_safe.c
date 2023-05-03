#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: listint_t linked list
 *
 * Return:  number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	int i = 0, loop = 0;
	const listint_t *tor, *hare;

	hare = head;
	tor = head;
	while (hare != NULL && hare->next != NULL)
	{	tor = tor->next;
		hare = hare->next->next;
		if (tor == hare)
		{	loop = 1;
			break;
		}
	}
	if (loop)
	{	tor = head;
		while (head)
		{
			tor = tor->next;
			hare = hare->next;
			if (hare->next == tor->next)
				break;
		}
		while (head)
		{	printf("[%p] %i\n", (void *)head, head->n);
			i++;
			head = head->next;
			if (head == hare)
			{
				printf("[%p] %i\n", (void *)head, head->n);
				printf("->[%p] %i\n", (void *)head->next, head->next->n);
				return (i);
			}
		}
	}
	while (head)
	{	printf("[%p] %i\n", (void *)head, head->n);
		head = head->next;
	}
	return (i);
}
