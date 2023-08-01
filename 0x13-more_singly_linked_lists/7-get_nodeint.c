#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Gets the nth node of the list.
 *
 * @head: Pointer to the head of the list.
 * @index: Index of the node to retrieve.
 *
 * Return: Pointer to the nth node, or NULL if the node doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nth;

	nth = 0;
	/* Traverse the list using a for loop to reach the desired node */
	for (nth = 0; nth < index && head != NULL; nth++)
		head = head->next;

	/* Check if the node at the specified index exists */
	if (head == NULL)
		return (NULL);

	return (head);
}
