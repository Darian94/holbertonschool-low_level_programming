#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * @head: pointer to the first node
 * @str: pointer to the string
 * Return: new o it is fail NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *s;
	list_t *new, *endnew;

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
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		endnew = *head;

		while (endnew->next != NULL)
		{
		       endnew = endnew->next;
		}

		endnew->next = new;
		return (new);
	}

}
