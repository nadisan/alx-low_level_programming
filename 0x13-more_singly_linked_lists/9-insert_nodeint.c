#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: listint_t list
 * @idx:  index of the list where the new node should be added
 * @n: value of new node element
 * Return:  address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = *head;
	listint_t *new;
	unsigned int i = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head)
	{
		while (i < idx - 1)
		{
			node = node->next;
			i++;
		}
		if (node->next)
			new->next = node->next;
		node->next = new;
	}
	else
		*head = new;
	return (new);
}
