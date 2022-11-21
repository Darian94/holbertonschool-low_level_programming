#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: pointer to a pointer to a struct
 * Return: save_data
 */

int pop_listint(listint_t **head)
{
	int save_data;

	listint_t *aux;

	if (*head == NULL)
		return (0);

	aux = *head;

	save_data = (*head)->n;

	*head = (*head)->next;

	free(aux);

	return (save_data);
}
