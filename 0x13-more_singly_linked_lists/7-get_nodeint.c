#include "lists.h"

/**
 * get_nodeint_at_index - count the nth node of list
 * @head:head of the list
 * @index:index of the node
 * Return:nth node of list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int i = 0;

	*current = *head;

	while (current != NULL)
	{
		if (i == index)
		{
			return (cuurent->n);
			i++;
			current = current->next;
		}
		else
		{
			return (NULL);
		}
	}
}
