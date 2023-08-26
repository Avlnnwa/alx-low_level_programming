#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to the pointer to the head of the linked list.
 * @str: String to be duplicated and added to the new node.
 * Return: The address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *temp;
size_t new_char;

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

new->str = strdup(str);

for (new_char = 0; str[new_char]; new_char++);

new->len = new_char;
new->next = NULL;
temp = *head;

if (temp == NULL)
{
*head = new;
}
else
{
while (temp->next != NULL)
temp = temp->next;
temp->next = new;
}

return (*head);
}
