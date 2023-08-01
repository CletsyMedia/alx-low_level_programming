#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - Deletes a node at the specified index.
 * @head: Pointer to a pointer to the head of the list.
 * @index: The location of the node to delete.
 *
 * Return: 1 if successful, -1 if the operation failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *currNode, *subsNode;

	/* Check if the head pointer is NULL or points to an empty list */
	if (!head || !*head)
	return (-1);

	/* Get the currNode pointing to the head of the list */
	currNode = *head;

	/* If the node to be deleted is the head node */
	if (index == 0)
	{
	*head = (*head)->next; /* Update the head to the next node */
	free(currNode); /* Free the currNode */
	return (1);
	}

	/* Traverse the list to find the node just before the desired index */
	for (i = 0; i < (index - 1); i++)
	{
	currNode = currNode->next;
	/* If the index is out of range, return -1 (operation failed) */
	if (currNode == NULL)
	return (-1);
	}

	/* Get the node that comes after the currNode */
	subsNode = currNode->next;

	/* Update the pointers to remove the subsNode from the list */
	currNode->next = subsNode->next;

	/* Free the memory occupied by the subsNode */
	free(subsNode);

	return (1);
}
