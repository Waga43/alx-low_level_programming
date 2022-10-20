#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Function that frees a list_t list.
 * @head: A pointer parameter of type list_t.
 */
void free_list(list_t *head)
{
	list_t *list_ptr;

	while (head)
	{
		list_ptr = head->next;
		free(head->str);
		free(head);
		head = list_ptr;
	}
}
