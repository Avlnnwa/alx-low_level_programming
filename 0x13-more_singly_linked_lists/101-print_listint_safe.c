#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *curr = head;
const listint_t *temp = NULL;

while (curr != NULL)
{
printf("[%p] %d\n", (void *)curr, curr->n);
count++;

temp = curr->next;
if (temp >= curr)
{
exit(98);
}

curr = temp;
}

return (count);
}
