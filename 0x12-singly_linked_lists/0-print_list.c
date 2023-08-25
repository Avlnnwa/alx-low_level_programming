#include "list.h"

/*
 * print_list - prints all the elements in the list_t list.
 * @h: is the linked list
 * Return: the number of elements in the list
 */

size_t print_list(const list_t *h)
{

size_t nod_count = 0;
while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] nil\n");
}
else
{
printf("[%u] %s\n", h->length, h->str);
}
h = h->next;
nod_count++;
}
return (nod_count);
}
