#ifndef LISTS
#define LISTS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct lists - singly linked list
 * @str: string - malloc
 * @length: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct lists
{
	char *str;
	unsigned int length;
	struct lists *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
