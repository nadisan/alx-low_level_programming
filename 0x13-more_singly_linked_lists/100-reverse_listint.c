#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: listint_t linked list
 * Return: pointer to the reversed list first noe
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *point, *node;

	if (head == NULL || *head == NULL)
		return (NULL);
	node = *head;
	point = *head;
	node = node->next;
	point->next = NULL;
	*head = point;

	while (node != NULL)
	{
		point = node;
		node = node->next;
		point->next = *head;
		*head = point;

	}
	return (*head);
}
