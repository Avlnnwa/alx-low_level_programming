#ifndef LINKED_LIST
#define LINKED_LIST

#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/*
 * struct list_t - is the singly linked list.
 * @str: string - with the use of malloc
 * @length: length of the string
 * @next: is the pointer that points to the next node.
 */

typedef struct list_t
{
char *str;
unsigned int length;
struct list_t *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
