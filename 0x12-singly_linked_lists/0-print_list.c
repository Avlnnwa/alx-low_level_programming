#include "lists.h"

/*
 * print_list - Prints all elements of a list_t list.
 * @h: Pointer to the head of the linked list.
 * Return: The number of nodes in the linked list.
 */
size_t print_list(const list_t *h) {
    if (h == NULL) {
        return 0;
    }

    if (h->str == NULL) {
        printf("[0] (nil)\n");
    } else {
        printf("[%u] %s\n", h->len, h->str);
    }

    return 1 + print_list(h->next);
}

