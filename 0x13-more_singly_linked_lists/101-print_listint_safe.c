#include "lists.h"

/**
 * print_listint_safe - print elements of the list
 * @head:the head of the list
 *
 * Retuen:the number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	long int difference;
	size_t count = 0;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;

		difference = head - head->next;

		if (difference > 0)
		{
			head = head->next;
		}
		else
		{
			printf("[%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (count);
}
