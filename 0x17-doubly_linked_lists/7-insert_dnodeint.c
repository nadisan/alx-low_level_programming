#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index- pointer to the new node added at start
 * @h: current head if dlistint
 * @idx: node index to insert it
 * @n: number to be added
 * Return: head of list after addition
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *temp = *h;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = n;

	if (!new_node)
		return (NULL);
	if (!h || !(*h)) /* NULL DLL */
		*h = new_node;
	else /* DLL exists */
	{
		temp = *h;
		/* advance to pos of idx in DLL */
		while (idx != i++ && temp->next)
			temp = temp->next;
		if (temp->next)
			new_node->prev = temp->prev;
		else
			new_node->prev = temp;
		if (idx == i) /* only happens when at end of DLL */
		{
			temp->next = new_node;
			new_node->prev = temp;
		}
		else if (idx == i - 1) /* insert at head or middle */
		{
			if (temp->prev)
				temp->prev->next = new_node;
			else /* head of LL */
				*h = new_node;
			temp->prev = new_node;
			new_node->next = temp;
		}
		else /* index is out of range */
		{
			free(new_node);
			return (NULL);
		}
	}
	return (new_node);

}
