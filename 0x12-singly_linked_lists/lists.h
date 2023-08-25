#ifndef _LINKED_LISTS
#define _LINKED_LISTS

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/*struc list_t - Define the structure for the linked list node
 * @str - string
 * @next - points to the next node 
 */

typedef struct list_t{
	char *str;
	struct list_t *next;
}list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);


#endif
