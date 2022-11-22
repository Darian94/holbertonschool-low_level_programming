#include "lists.h"

/**
 * free_list - free a list
 * @head: pointer the node
 */

void free_list(list_t *head)
{
	if (head)
	{
		free(head->str);
		free(head->next);
	}
}
