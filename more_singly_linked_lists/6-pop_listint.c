#include "lists.h"

/**
 * pop_listint - delete a first node
 * @head: pointer to the first node
 * Return: new start
 */                                                                             int pop_listint(listint_t **head)
{
	listint_t aux;
	if (head != NULL)
	{
		aux = *head;
		*head = (*head)->next;
		free(aux);
	}
	return (head);
}
