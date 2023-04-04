#include "lists.h"

/**
 * pop_listint - delete the first element in list
 * @head:double pointer
 *
 *Return:head node's data
 */


int pop_listint(listint_t **head)
{
	listint_t *tempo;
	int n;

	if (head ==NULL)
	{ 
		return;
	}
	else
	{
		tempo = *head;
		*head = tempo->next;
		n = tempo->n;
		free(tempo);
		return (n);
	}
}
