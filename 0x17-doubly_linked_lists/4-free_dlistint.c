#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint -  frees a dlistint_t list
 * @head: pointer to head of doubly linked list
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	
}

