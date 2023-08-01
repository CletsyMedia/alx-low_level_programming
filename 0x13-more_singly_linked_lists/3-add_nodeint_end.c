#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node to the end of the list.
 * @head: Pointer to the current head of the list.
 * @n: Integer value to add to the list.
 *
 * Return: Pointer to the current position in the list.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *currNode;

	/* Allocate memory for the new node */
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	/* Set the data (n) of the new node and its "next" pointer */
	newNode->n = n;
	newNode->next = NULL;

	/* If the list is empty, update the head pointer and return */
	if (*head == NULL)
	{
		*head = newNode;

		return (*head);
	}

	/* Traverse the list to find the currNode last node */
	for (currNode = *head; currNode->next != NULL; currNode = currNode->next)
	{
		/* Nothing to do in the loop body; we are using the loop for traversal */
	}

	/* Update the "next" pointer of the currNode to point to the newNode */
	currNode->next = newNode;

	/* Return the head of the list (the address of the first element) */
	return (*head);
}
