#include "lists.h"


/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Points the pointer to the head of the linked list.
 * Return: The data (n) of the deleted head node, or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	if (*head == NULL)
	{
		return (0);
	}

	listint_t *temp = *head;
	int data = temp->n;
	*head = (*head)->next;
	free(temp);
	return (data);

}
