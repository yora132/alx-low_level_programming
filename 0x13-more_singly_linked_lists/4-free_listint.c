#include "lists.h"

/**
 * free_listint - free list
 * @head:head of the list
 * Return:nothing
 */

void free_listint(listint_t *head)
{
	listint_t *tempo;

	while (head)
	{
		tempo = head->next;
		free(head);
		head = tempo;
	}
}
