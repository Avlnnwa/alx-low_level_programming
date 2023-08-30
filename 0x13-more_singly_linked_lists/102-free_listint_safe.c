#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: Pointer to the pointer to the head of the linked list.
 * Return: The size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
listint_t *curr = *h;

while (curr != NULL)
{
listint_t *temp = curr;
curr = curr->next;
free(temp);
count++;

if (temp == current)
{
*h = NULL;
break;
}
}

*h = NULL;
return (count);
}
