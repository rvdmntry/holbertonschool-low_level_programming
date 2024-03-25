#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct list_s - singly linked list node structure
 * @str: malloc'ed string
 * @len: length of the string
 * @next: points to the next node
 * Description: This struct is for managing a singly linked list, where each
 * node contains a string and its length, along with a pointer to the next node
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);

#endif /* LISTS_H */
