#include "lists.h"

/**
 * listint_len - return the number of elements in a linked list
 * @h: pointer to the head of a list
 * Return: the number of element in the list
 */
size_t listint_len(const listint_t *h)
{
	int number = 0;

	while (h)
	{
		h = h->next;
		number++;
	}
	return (number);
}
