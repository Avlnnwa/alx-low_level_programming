#include "lists.h"

/**
 * dlistint_len - get number of nodes
 * @h: head of list 
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h);
{
	int nodes = o;

	while (h)
	{
		nodes += 1;
		h = h->next;
	}
	return (nodes);
}
