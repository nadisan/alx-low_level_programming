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
	dlistint_t *temp = *head;
	dlistint_t *del = NULL;
	unsigned int i = 0;

	if (index == 0)
	{	if (temp)
		{	*head = temp->next;
			temp = del;
			return (1);
		}
		return (-1);
	}

			

/*	if ((!head || !(*head)))
		return (-1);*/
	while (i < index && temp)
	{	temp = temp->next;
		i++;
	}
	if (i == index && temp != NULL)
	{
		del = temp;
		temp = temp->prev;
		if (temp)
			temp->next = del->next;
		if (del->next != NULL)
				del->next->prev = temp;
		
		del = NULL;
		return (1);
	}
	return (-1);
}
