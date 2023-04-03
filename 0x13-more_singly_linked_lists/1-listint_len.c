#include "lists.h"

/**
 * listint_len - print the number of elelments of list
 * @h:list to be checked
 * Return:number of element
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
