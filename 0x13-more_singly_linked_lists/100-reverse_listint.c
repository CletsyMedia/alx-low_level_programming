#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL; /* Pointer to keep track of the previous node */
	listint_t *current = *head; /* Pointer to traverse the list */
	listint_t *next; /* Temporary variable to store the next node */

	/* Traverse the list and reverse the pointers */
	while (current != NULL)
	{
	next = current->next; /* Store the next node in a temporary variable */

	current->next = prev; /* Reverse the pointer of the current node */

	prev = current; /* Move the prev pointer to the current node */
	current = next; /* Move the current pointer to the next node */
	}

/* Update the head to point to the last node */
	*head = prev;

	return (*head); /* Return the new head of the reversed list */
}
