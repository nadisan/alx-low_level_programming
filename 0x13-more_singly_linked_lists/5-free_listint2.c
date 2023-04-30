#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: listint_t list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *node = *head;

	if (node)
	{
		free_listint2(&(node->next));
		free(node);
	}
	*head = NULL;
}
