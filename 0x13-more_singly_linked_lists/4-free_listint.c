#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a linked list of integers.
 * @head: Pointer to the head of the list.
 *
 * Description: This function recursively frees the memory allocated for each
 * node in the linked list starting from the given head.
 */
void free_listint(listint_t *head)
{
	/* Check if the list is empty (base case for recursion) */
	if (head == NULL)
		return;

	/* Recursively free the rest of the list (starting from the next node) */
	free_listint(head->next);

	/* Free the current node */
	free(head);
}
