#include "lists.h"

/**
 * free_listint2 - free list
 * @head:double pointer to list
 *
 *Return:nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *tempo;

	if (head == NULL)
		return;
	while (*head)
	{
		tempo = (*head)->next;
		free(*head);
		*head = tempo;
	}
}
