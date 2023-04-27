#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t
 * @head: list_t
 * @str: new string to be added
 *
 * Return: addrss of new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);

}
