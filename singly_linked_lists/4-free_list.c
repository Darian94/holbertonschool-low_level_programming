#include "lists.h"

/**
 * free_list - free a list
 * @head: pointer the node
 */

void free_list(list_t *head)
{
	while (head)
	{
		free(head->next);
		free(head->str);
		free(head);
	}
}
