#include "lists.h"

/**
 * dlistint_len - Counts the number of elements in a dlistint_t list.
 * @h: Pointer to the head of the list.
 * Return: Number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0; /* Initialize the count to zero */

	/* Traverse the list using a for loop */
	for (; h != NULL; h = h->next)
	{
	count++; /* Increment the count for each node */
	}

	return (count); /* Return the total count of nodes */
}
