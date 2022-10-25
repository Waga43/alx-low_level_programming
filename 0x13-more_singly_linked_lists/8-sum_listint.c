#include "lists.h"

/**
 * sum_listint - Function calculates the sum of all the data (n)
 * of a linked list, listint_t.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: 0 if the list is empty. Otherwise, return the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

