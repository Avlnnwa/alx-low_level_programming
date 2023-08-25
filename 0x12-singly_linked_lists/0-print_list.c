#include "list.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 * main - returns 0.
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

int main(void)
{
list_t node3 = {"World", NULL};
list_t node2 = {"Hello", &node3};
list_t node1 = {"Goodbye", &node2};
size_t num_nodes = print_list(&node1);
printf("Number of nodes: %lu\n", num_nodes);

return (0);
}
