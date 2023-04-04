#include "lists.h"

/**
 * add_nodeint_end - add new node at end
 * @head:the head of list
 * @n:new node to be added
 * Return:the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tempo;

	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
	new = malloc(sizeof(listint_t));
		if (new == NULL)
		{
			return (NULL);
		}
		else
		{
		new->n = n;
		new->next = NULL;
		}
	tempo = *head;

	while (tempo->next)
	{
		tempo = tempo->next;
	}
	tempo->next = new;
	return (new);
	}
}

			

