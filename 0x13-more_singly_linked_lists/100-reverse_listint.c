#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: listint_t linked list
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *reverse;
	listint_t *node = *head;

	if (*head != NULL && node->next != NULL)
	{
		reverse = *head;
		reverse->next = NULL;
		while (node->next)
		{
			reverse = node->next;
			reverse->next = node;
			node = node->next;
		}
	}
	else
		return (NULL);
	return (reverse);
}
