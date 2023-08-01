#include "lists.h"

/**
 * free_listint2 - Frees the list and sets the head to NULL
 *
 * @head: Double pointer to the first node of the list
 *
 * Return: Nothing
 *
 * Description:
 *     This function frees the memory occupied by each node in the linked list
 *     starting from the first node. It also sets the head of the list to NULL,
 *     ensuring that the list is empty after freeing all nodes.
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node, *temp_node;

	if (head != NULL)
	{
		/* Loop through the list, freeing memory for each node */
		for (current_node = *head; current_node != NULL; current_node = current_node->next)
		{
			/* Set temp_node to the current_node before moving to the next node */
			temp_node = current_node;

			/* Move current_node to the next node in the list */
			/* (already done in the for loop definition) */

			/* Free the memory occupied by the temp_node (current_node) */
			free(temp_node);
		}

		/* Set the head pointer to NULL to empty the list */
		*head = NULL;
	}
}
