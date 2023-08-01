#include "lists.h"

/**
 * free_listint2 - Frees the list and sets head to NULL.
 *
 * @head: Pointer to a pointer to the first node.
 *
 * Description:
 * The function takes a pointer to a pointer to the first node linked list
 * It frees the memory occupied by each node in the list
 * to NULL to ensure it no longer points to the freed memory.
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node, *temp_node;

	if (head != NULL)
	{
	/* Set current_node to point to the first node of the linked list */
	current_node = *head;

	/* Iterate through the whole linked list */
	for (temp_node = current_node; temp_node != NULL; temp_node = current_node)
	{
	/* Move current_node to the next node before freeing temp_node */
	current_node = current_node->next;

	/* Free the memory occupied by the current_node (temp_node) */
	free(temp_node);
	}

	/* After the loop, all nodes have been freed, so set head to NULL */
	*head = NULL;
	}
}
