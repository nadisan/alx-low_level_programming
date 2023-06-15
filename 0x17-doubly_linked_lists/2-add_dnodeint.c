#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print double linked listint
 * @h: double linked listint
 * Return: number of nodes.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{       
	dlistint_t *add = NULL;

	add = malloc(sizeof(dlistint_t));
	if (!add)
		return (NULL);
	add->n = n;
	add->prev = NULL;

	if (*head == NULL)
	{
		add->next = NULL;
		*head = add;
	}
	else
	{
		add->next = *head;
		if (*head)
			(*head)->prev = add;
		*head = add;
	}
	return (add);
}
