#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint -  deletes head node of listint_t,returns the head node’s data
 * @head: listint_t list
 *
 * Return: 0 for empty list, else head nodes's data.
 */

int pop_listint(listint_t **head)
{
	listint_t *node = *head;
	int n;

	if (node == NULL)
		return (0);

	n = node->n;
	*head = node->next;
	free(node);
	return (n);	
}
