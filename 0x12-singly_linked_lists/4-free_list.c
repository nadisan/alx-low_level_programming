#include "lists.h"

/**
 * free_list - free list_t struct
 * @head: pointer to list_t
 * Return: Always 0.
 */

void free_list(list_t *head)
{
	list_t *start;

	while (head)
	{
		start = head->next;
		free(head);
		head = start;
	}
	head = NULL;

	free(head);
	return;
}
