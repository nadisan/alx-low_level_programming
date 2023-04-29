#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: listint_t list
 * Return: Void.
 */

void free_listint(listint_t *head)
{
	if (head)
		free_listint(head->next);
	free(head);

}
