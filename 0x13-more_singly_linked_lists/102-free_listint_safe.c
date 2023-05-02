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
	listint_t *hare = *h;
	listint_t *tor = *h;
	int i = 0, loop;

	while (*h)
	{
		if (!loop)
		{
			while (hare != NULL && hare->next != NULL)
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
		else
			tor = tor->next;
		free(*h);
		*h = tor;
		i++;
	}
	*h = NULL;
	return (i);
}
