#include "lists.h"

/**
 * print_listint - function that prints the elements of a node
 * @h: pointer to the first struct of the list
 * Return: i
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;
	const listint_t *list;

	if (h == NULL)
		return (i);

	list = h;

	while (list != NULL)
		{
			printf("%d\n", list->n);
			i++;
			list = list->next;
		}
	return (i);
}
