#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A double pointer to the head of the list_t list.
 * @str: The string to be duplicated and added to the list.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	unsigned int len = 0;

	/* Allocate memory for the new node */
	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* Duplicate the string */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Calculate the length of the string */
	while (str[len])
		len++;

	new_node->len = len;
	new_node->next = NULL; /* This will be the last node, so next is NULL */

	if (*head == NULL)
	{
		*head = new_node; /* If list is empty, set new node as head */
	}
	else
	{
		temp = *head;
		while (temp->next != NULL) /* Traverse the list to find the last node */
			temp = temp->next;
		temp->next = new_node; /* Append the new node at the end */
	}

	return (new_node);
}
