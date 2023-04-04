#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index
 * @head:double pointer to list
 * @index:index of lisrt element
 *
 *Return: succsse 1 and -1 in fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *ptr2;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		ptr2 = (*head)->next;
		free(*head);
		*head = ptr2;
		return (1);
	}

	ptr = *head;

	for (i = 0; i < index - 1; i++)
	{
		if (ptr->next == NULL)
		return (-1);

		ptr = ptr->next;
	}

	ptr2 = ptr->next;
	ptr->next = ptr2->next;
	free(ptr2);
	return (1);
}

