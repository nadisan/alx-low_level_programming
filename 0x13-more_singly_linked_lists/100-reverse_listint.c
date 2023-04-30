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
	listint_t *reverse = *head;
	listint_t *node = *head;
	listint_t *point;

	if (*head)
	{
		*reverse->next = NULL;
			while (node->next)
			{	point = *reverse;
				node = node->next;
				*reverse = node;
				*reverse->next = point;
			}
	}
	return (*reverse);
}
