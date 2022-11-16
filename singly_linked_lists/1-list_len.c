#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: is the pointer to a structure of a linked list
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	int n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
