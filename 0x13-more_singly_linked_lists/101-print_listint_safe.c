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
	{
		tor = tor->next;
		hare = hare->next->next;
		i++;
		if (tor == hare)
		{
			hare = hare->next;
			loop = 1;
			break;
		}
	}
	if (loop)
	{
		while (head)
		{
			i++;

			if (head == hare)
			{
				printf("[%p] %i\n", (void *)head, head->n);
				printf("-> [%p] %i\n", (void *)head, head->next->n);
				exit(98);
			}
			printf("[%p] %i\n", (void *)head, head->n);
			head = head->next;
		}
	}
	while (head)
	{
		printf("[%p] %i\n", (void *)head, head->n);
		head = head->next;
	}
	return (i);
}
