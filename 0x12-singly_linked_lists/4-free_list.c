#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: Pointer to the head of the linked list to be freed.
 * Return: no return.
 */

void free_list(list_t *head)
{
while (head != NULL)
{
list_t *temp = head;
head = head->next;
free(temp->str);
free(temp);
}
}
