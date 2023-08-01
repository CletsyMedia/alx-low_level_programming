#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a list and sets its head to NULL
 *
 * @head: Double pointer to the head of the list
 *
 * Return: Nothing
 *
 * Description:
 *	This function frees the memory occupied by each node in the linked list
 *	starting from the head. It also sets the head of the list to NULL,
 *	ensuring that the list is empty after freeing all nodes.
 */
void free_listint2(listint_t **head)
{
	listint_t *Nodetemp, *currNode;

	if (head == NULL)
		return;

	/* Set currNode to point to the head of the list */
	currNode = *head;

	/* Loop through the list, freeing memory for each node */
	for (currNode = *head; currNode != NULL; currNode = currNode->next)
	{
		/* Store the current node in a temporary variable */
		Nodetemp = currNode;
		/* Free the memory occupied by the current node */
		free(Nodetemp);
	}
	/* Set the head pointer to NULL to empty the list */
	*head = NULL;
}
