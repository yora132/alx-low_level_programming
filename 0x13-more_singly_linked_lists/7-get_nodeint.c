#include "lists.h"

/**
 * get_nodeint_at_index - count the nth node of list
 * @head:head of the list
 * @index:index of the node
 * Return:nth node of list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < index; i++)
	{
		head = head->next;
	}
	return (head);
}
