#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node
 * at a given position in a listint_t linked list.
 * @head: Pointer to the pointer to the head of the linked list.
 * @idx: Index at which the new node should be added.
 * @n: Integer value to be added to the new node.
 * Return: The address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
if (head == NULL)
{
return (NULL);
}

listint_t *new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

listint_t *current = *head;
for (unsigned int i = 0; i < idx - 1; i++;)

{
if (current == NULL)
{
free(new_node);
return (NULL);
}
current = current->next;
}
new_node->next = current->next;
current->next = new_node;
return (new_node);

}
