#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list
 * Return: Always 0.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *hare = head;
	listint_t *tor = head;

	while (hare != NULL && hare->next != NULL)
	{

		tor = head->next;
		hare = hare->next->next;
		if (tor == hare)
		{
			head = hare->next;
			break;
		}
	}
	return (hare);
}
