#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list
 * @head: listint_t list
 * @index: the index of the node to be deleted
 * Return: 1 for success else -1.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node = *head;
	listint_t *shuffle;

	if (*head == NULL && index == 0)
	{
		free(*head);
		return (1);
	}
	if (*head)
	{
		if (index)
		{
			while (i < index - 1)
			{
				node = node->next;
				i++;
			}
			if (node->next)
			{
				shuffle = node->next;
				node->next = shuffle->next;
				free(shuffle);
			}
			else
				return (-1);
		}
		else
		{
			if (node->next == NULL)
				*head = NULL;
			else
				*head = node->next;
			free(node);
		}

		return (1);
	}
	return (-1);
}
