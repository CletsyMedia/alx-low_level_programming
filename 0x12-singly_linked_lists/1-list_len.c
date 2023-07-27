#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * list_len - Finds the number of nodes in a list.
 * @h: Pointer to the head of the singly linked list.
 *
 * Return: Number of elements in the linked list.
 */
size_t list_len(const list_t *h)
{
	/* Initialize a variable to keep track of the number of nodes */
	int i;

	/* Loop through the linked list while 'h' points to a valid node (not NULL) */
	for (i = 0; h; i++)
	{
		/* Move 'h' to point to the next node in the list */
		h = h->next;
	}

	/* Return the total number of nodes in the linked list */
	return (i);
}
