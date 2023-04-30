#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - adds a new node at idx of a listint_t list
 * @head: listint_t list
 * @idx: index where node is to be added
 * @n: value of new node
 * Return: address of the new element or Null if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *node = *head;
	listint_t *new;

	/*if (idx == '\0' || head == NULL)
		return (NULL);*/
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		if (*head)
			new->next = node;
		*head = new;
		return (new);
	}
	else if (*head != NULL && idx > 0)
	{
		while (i < idx - 1)
		{
			if (node == NULL)
			{
				free(new);
				return (NULL);
			}
			node = node->next;
			i++;
		}
		if (node->next)
			new->next = node->next;
		node->next = new;
		return (new);
	}
	else
	{
		free(new);
		return (NULL);
	}
}
