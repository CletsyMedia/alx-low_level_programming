#include "lists.h"

/**
 * print_list - Print elements in a linked list.
 *
 * @h: Pointer to the head of the first node.
 *
 * Return: Number of nodes in the linked list.
 */

size_t print_list(const list_t *h)
{
	size_t nodeIndex = 1;

	/* Return 0 if the linked list is empty */
	if (h == NULL)
		return (0);

	/* Loop through the linked list using a for loop */
	for (; h->next != NULL; h = h->next)
	{
		/* If str is NULL, print len as 0 and str as (nil) */
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		/* Increment the nodeIndex to keep track of the number of nodes */
		nodeIndex += 1;
	}

	/* Print the last node in the linked list */
	printf("[%d] %s\n", h->len, h->str);

	return (nodeIndex);
}
