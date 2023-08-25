#include "list.h"

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: Pointer to the head of the linked list.
 * Return: The number of nodes in the linked list.
 */

size_t list_len(const list_t *h)
{
size_t count = 0;
while (h != NULL)
{
	h = h->next;
	count++;
}
return (count);

}
