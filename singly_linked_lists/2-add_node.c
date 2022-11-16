#include "lists.h"

/**
 * add_node - adds a new node to a list
 * @head: pointer to first node
 * @str: string
 * Return: new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	char *s;
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	s = strdup(str);

	if (s == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(s);
	new->str = s;
	new->next = *head;
	*head = new;
	return (new);
}
