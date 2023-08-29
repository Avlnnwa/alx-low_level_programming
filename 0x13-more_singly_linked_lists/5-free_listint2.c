#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 * @head: Points to the pointer of the head of the linked list to be freed.
 */

void free_listint2(listint_t **head)
{
	while (*head != NULL)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
