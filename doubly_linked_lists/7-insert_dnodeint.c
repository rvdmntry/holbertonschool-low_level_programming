#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to the pointer of the head node of the list.
 * @idx: index of the list where the new node should be added, starting at 0.
 * @n: data for the new node.
 * Return: the address of the new node, or NULL if it failed or not possible.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	current = *h;
	while (current != NULL && i < idx - 1)
{
		current = current->next;
		i++;
	}

	if (current == NULL && i == idx - 1)
		return (add_dnodeint_end(h, n));
	else if (current != NULL && i == idx - 1)
{
		new_node->next = current->next;
		new_node->prev = current;
		if (current->next != NULL)
			current->next->prev = new_node;
		current->next = new_node;
	} else
{
		free(new_node);
		return (NULL);
	}

	return (new_node);
}
