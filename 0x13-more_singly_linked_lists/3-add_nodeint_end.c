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
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tempo = *head;

	while (tempo->next != NULL)
	{
		tempo = tempo->next;
	}
	tempo->next = new;
	return (new);
}
