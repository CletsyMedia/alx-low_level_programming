#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 *
 * @head: Double pointer to the head of the linked list.
 *
 * Return: The (n) of the deleted head node, or 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
	if (head == NULL || *head == NULL) /* Check if the list is empty */
		return (0);

	listint_t *current = *head; /* Store the head node in a temporary variable */
	int data = current->n; /* Get the data (n) of the head node */

	*head = (*head)->next; /* Move the head pointer to the next node */

	free(current); /* Free the memory occupied by the previous head node */

	return (data); /* Return the data of the deleted head node */
}
