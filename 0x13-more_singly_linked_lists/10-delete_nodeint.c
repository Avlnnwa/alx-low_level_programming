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
if (head == NULL || *head == NULL)
{
return (-1);
}
if (index == 0)
{
listint_t *temp = *head;
*head = (*head)->next;
free(temp);
return (1);
}

listint_t *current = *head;
listint_t *prev = NULL;

for (unsigned int i = 0; i < index; i++)
{
if (current == NULL)
{
return (-1);
}

prev = current;
current = current->next;
}
if (current == NULL)
{
return (-1);
}
prev->next = current->next;
free(current);
return (1);

}
