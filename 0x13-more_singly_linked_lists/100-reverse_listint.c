#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - Reverses a linked list.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: Pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	/* Declare variables to keep track of previous and current nodes */
	listint_t *previous = NULL;
	listint_t *currNode = NULL;

	/* Loop through the linked list until the head pointer is NULL */
	for (; *head != NULL; *head = currNode)
	{
		/* Store the next node in the list */
		currNode = (*head)->next;
		/* Reverse the link of the current node to point to the previous node */
		(*head)->next = previous;
		/* Update the previous node to the current node */
		previous = *head;
	}

	/* After the loop, the head pointer will be pointing to the last node */
	*head = previous;
	/* Return the pointer to the first node of the reversed list */
	return (*head);
}
