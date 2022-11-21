#include "lists.h"
/**
 * insert_nodeint_at_index - function that add a new node at a given position
 * @head: pointer to a pointer to a struct
 * @n: int
 * @idx: index
 * Return: new
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int cont = 0;

	listint_t *aux;

	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	aux = *head;

	new->n = n;

	if (head == NULL)
	{
		new->n = n;
		aux->next = new;
		return (new);
	}

	if (idx == 0)
	{
		new->next = aux;
		*head = new;
		return (new);
	}

	for (cont = 1; cont < idx; cont++)
	{
		if (aux == NULL || aux->next == NULL)
			return (NULL);
		aux = aux->next;
	}

	new->n = n;
	new->next = aux->next;
	aux->next = new;
	return (new);
}
