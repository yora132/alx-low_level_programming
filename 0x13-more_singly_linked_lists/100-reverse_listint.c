#include "lists.h"

/**
 * reverse_listint - reverse the list
 * @head:double pointer to the list
 *
 * Return:the rev list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temo, *temp2;

	if (haed == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);

	temp = NULL;

	while (*head != NULL)
	{
		temp2 = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = temp2;
	}
	*head = temp;
	return (*head);
}
