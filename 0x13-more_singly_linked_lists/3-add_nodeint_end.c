#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: listint_t list
 * @n: value of new node
 * Return: address of the new element or Null if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = *head;
	listint_t *start;
	listint_t *point;

	point = malloc(sizeof(listint_t));
	if (point == NULL)
		return (NULL);
	point->n = n;
	point->next = NULL;

	if (*head == NULL)
	{
		*head = point;
	}
	else
	{
		start = new;
		while (new->next)
			new = new->next;
		new->next = point;
		*head = start;
	}
	return (point);

}
