#include "lists.h"

/**
 * print_listint_safe - Function safely prints a linked list.
 * @head: pointer to the head of the linked list
 *
 * Return: number of nodes in the list.
 * If the function fails, exit the program with status 98
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	long int diff;

	while (head)
	{
		diff = head - head->next;
		num++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (num);
}
