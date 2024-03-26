#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to the pointer of the head node of the list.
 * @n: the integer value for the new node.
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n) {
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head; // Next of new node will be the current head

	if (*head != NULL)
		(*head)->prev = new_node; // Update previous head if list is not empty

	*head = new_node; // Update the head to be the new node
	return (new_node);
}
