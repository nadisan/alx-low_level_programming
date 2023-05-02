#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: a listint_t list
 * Return: size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t hare = *h;
	listint_t tor = *h;
	int i = 0;

	if (!(*h) || !(h))
		return (NULL);
	while (hare != NULL & hare->next != NULL)
	{
		tor = tor->next;
		hare = hare->next->next;
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
			i++
			tor = head->next
			free(head);
			head = tor;
			if (head == hare)
				break;
		}
	}
	else
		while (head)
		{
			i++
			tor = head->next;
			free(head);
			head = tor;
		}
	*h = NULL
	return (i);
}
