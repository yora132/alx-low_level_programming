#include "lists.h"

/**
 * add_nodeint - add a new node at the begin
 * @head:head of list
 * @n:new node
 * Return:the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = *head;
	new = *head;
	}
	return (new);
}
