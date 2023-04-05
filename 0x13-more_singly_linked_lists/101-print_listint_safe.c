#include "lists.h"

/**
 * print_listint_safe - print elements of the list
 * @head:the head of the list
 *
 * Return: the number of nodes in list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	long int difference;

	if (head == NULL)
		exit(98);

	while (head)
	{
		count++;
		printf("[%p] %d\n", (void *)head, head->n);

		difference = head - head->next;

		if (difference > 0)
		{
			head = head->next;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (count);
}
