#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index- deletes the node at index index of a dlistint_t linked list.
 * @head: current head if dlistint
 * @index: node index to insert it
 * Return: head of list after addition
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *h;
	dlistint_t *del = NULL;
	unsigned int i = 0;

	if ((!h || !(*h)))
		return (-1);
	else
	{
		while (idx != i++ && temp->next)
			temp = temp->next;
		if (temp->next)
			return (-1);
		else
			del = temp->next;
		if (idx == i)
		{	temp->next = new_node;
			new_node->prev = temp;
		}
		else if (idx == i - 1)
		{
			if (temp->prev)
				temp->prev->next = new_node;
			else
				*h = new_node;
			temp->prev = new_node;
			new_node->next = temp;
		}
		else
		{	free(new_node);
			return (NULL);
		}
	}
	return (new_node);
}
