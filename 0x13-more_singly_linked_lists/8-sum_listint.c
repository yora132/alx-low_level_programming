#include "lists.h"

/**
 * sum_listint - calculate the sum of all data (n)
 * @head:head of list
 *
 * Return: the sum of all the data (n)
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
