#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the head of the list_t list.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;	/* Save the next node */
		free(head->str);	/* Free the string */
		free(head);			/* Free the node */
		head = temp;		/* Move to the next node */
	}
}
