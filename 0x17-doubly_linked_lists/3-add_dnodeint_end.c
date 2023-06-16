#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end- pointer to the new node added at start
 * head : current head if dlistint
 * Return: new head;.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if(temp == NULL)
		new->prev = NULL;
	else 
		while (temp != NULL)
		{
			if(temp->next == NULL)
			{
				new->prev = temp;
				temp->next = new;
			        return (*head);
			}
			temp = temp->next;
		}

	*head = new;
	return (*head);

}
