#include "list.h"

/*
 * print_list - This prints all the elements of a list_t list.
 * @h: is the singly linked list
 * Return: returns the number of elements on the list
 */

size_t print_list(const list_t *h)
{

size_t node_count = 0;

while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%lu] %s\n", node_count, h->str);

}
h = h->next
node_count++;
}
return (node_count);
}
