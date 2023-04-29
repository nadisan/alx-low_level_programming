#include "lists.h"

/**
 * free_list - free list_t struct
 * @head: pointer to list_t
 * Return: Always 0.
 */

void free_list(list_t *head)
{
	list_t *start;
	if (free_list == NULL)
		return;
	while (head->next)
	{
		start = head->next;
		free(head->str);
		free(head);
		head = start;
	}
	free(head->str);
	free(head);
}
