#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: Pointer to the head of the linked list to be freed.
 */

void free_listint(listint_t *head)
{
while (head != NULL)
{
listint_t *temp = head;
head = head->next;
free(temp);
}
}
