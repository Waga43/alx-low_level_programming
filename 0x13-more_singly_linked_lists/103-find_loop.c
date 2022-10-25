#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list
 * @head: A pointer to the head of the listint_t linked list.
 *
 * Return: The address of the node where the loop starts or
 * NULL if there is no loop.
 *
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first, *second;

	if (head == NULL || head->next == NULL)
		return (NULL);

	first = head->next;
	second = (head->next)->next;

	while (second)
	{
		if (first == second)
		{
			first = head;

			while (first != second)
			{
				first = first->next;
				second = second->next;
			}

			return (first);
		}

		first = first->next;
		second = (second->next)->next;
	}

	return (NULL);
}
