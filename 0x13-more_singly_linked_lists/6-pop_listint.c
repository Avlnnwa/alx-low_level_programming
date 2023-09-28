#include "lists.h"


/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Points the pointer to the head of the linked list.
 * Return: The data (n) of the deleted head node, or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *h;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	data = temp->n;
	h = temp->next;

	free(temp);
	*head = h;

	return (data);
}
