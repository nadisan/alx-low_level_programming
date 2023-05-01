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

	if (!head)
		return (i);

	while (head)
	{
		i++;
		if (!loop)
		{
			if (hare != NULL && hare->next != NULL)
			{
				tor = tor->next;
				hare = hare->next->next;
				if (tor == hare)
				{
					hare = hare->next;
					loop = 1;
				}
			}
		}
		else if (head == hare)
		{
			printf("[%p] %i\n", (void *)head, head->n);
			head = head->next;
			printf("-> [%p] %i\n", (void *)head, head->n);
			exit(98);
		}
		printf("[%p] %i\n", (void *)head, head->n);
		head = head->next;
	}
	return (i);
}
