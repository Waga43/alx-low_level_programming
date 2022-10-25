#include "lists.h"

/**
 * free_listint_safe - Program that frees a linked list
 * @h: pointer to the first node in the linked list
 * Description: The function sets the head to NULL.
 * The function can free lists with a loop
 *
 * Return: the size of the list that was freed'd.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
