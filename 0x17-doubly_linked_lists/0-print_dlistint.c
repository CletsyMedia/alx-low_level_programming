#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Prints all elements of a dlistint_t list.
 * @h: Pointer to the head of the list.
 * Return: Number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	/* Initialize a variable to count the number of nodes */
	size_t count = 0;

	/* Iterate through the list using a for loop */
	for (; h != NULL; h = h->next)
	{
	/* Print the data of the current node */
	printf("%d\n", h->n);

	/* Increment the count for each node processed */
	count++;
	}

	/* Return the total number of nodes */
	return (count);
}
