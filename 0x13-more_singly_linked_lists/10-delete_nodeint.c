#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index
 * in a listint_t linked list.
 * @head: Pointer to the pointer to the head of the linked list.
 * @index: Index of the node to be deleted.
 * Return: 1 if deletion succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int x;
listint_t *previous;
listint_t *next;

previous = *head;

if (index != 0)
{
for (x = 0; x < index - 1 && previous != NULL; x++)
{
previous = previous->next;
}
}
if (previous == NULL || (previous->next == NULL && index != 0))
{
return (-1);
}

next = previous->next;
if (index != 0)
{
previous->next = next->next;
free(next);

}

else
{
free(previous);
*head = next;
}
return (1);
}
