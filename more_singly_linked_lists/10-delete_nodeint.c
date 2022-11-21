#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: pointer to a pointer to a struct
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux, *frii;

	unsigned int cont = 0;

	aux = *head;

	frii = aux;

	if (aux == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(frii);
		return (1);
	}

	for (cont = 0; cont < (index - 1) ; cont++)
	{
		if (aux->next == NULL)
			return (-1);
		aux = aux->next;
	}

		frii = aux->next;
		aux->next = frii->next;
		free(frii);
		return (1);
}

