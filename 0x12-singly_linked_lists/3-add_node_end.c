#include "lists.h"

/**
 * add_node_end - adds a new node at the beginning of a list_t
 * @head: list_t
 * @str: new string to be added
 *
 * Return: addrss of new element, or NULL if it failed
 */


list_t *add_node_end(list_t **head, const char *str)
{

	list_t *point;
	list_t *new = *head;
	list_t *end;

	point = malloc(sizeof(list_t));
	if (point == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	point->str = strdup(str);
	point->len = strlen(str);
	point->next = NULL;

	if (*head != NULL)
	{
		end = new;
		while (new->next != NULL)
			new = new->next;
		new->next = point;
	}
	else
	{
		new = point;
		end = new;
	}

	*head = end;
	return (point);
}


