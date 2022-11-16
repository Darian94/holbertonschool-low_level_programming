#include "lists.h"

/**
 * print_list - prints all elements of the list_t
 * @h: is the pointer to a structure of a linked list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int n = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d]", h->len);
			printf("%s\n", h->str);
		}
		n++;
		h = h->next;
	}
	return (n);
}
