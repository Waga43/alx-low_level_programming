#include "lists.h"

/**
 * list_len - Function returns the number of elements in
 * a linked list_t list.
 * @h: Pointer variable of type list_t.
 *
 * Return: The number of elements in h.
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
