#include "list.h"

/*
 * listint_len - returns the number of elemnts  in a linked listint_t list
 * @h: Pointer to the head of the linked list.
 * Return: numbers of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);

}
