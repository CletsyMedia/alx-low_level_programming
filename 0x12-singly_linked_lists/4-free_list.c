#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_list - Frees a linked list and its contents.
 * @head: Pointer to the beginning of the linked list.
 */
void free_list(list_t *head)
{
	/* If the head pointer is NULL (empty list), return */
	if (head == NULL)
		return;

	/* Recursively free the rest of the list from the current node */
	free_list(head->next);

	/* Free the content (string) of the current node */
	free(head->str);

	/* Free the current node itself */
	free(head);
}
