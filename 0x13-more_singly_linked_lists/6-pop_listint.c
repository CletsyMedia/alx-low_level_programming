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
	int deleted_value; /* To store the value of the deleted head node */
	listint_t *temp_node, *next_node;

	/* Check if the linked list is empty or if the head is NULL */
	if (*head == NULL)
		return (0);

	/* Store the address of the head node in temp_node */
	temp_node = *head;

	/* Move the head pointer to the next node */
	next_node = temp_node->next;

	/* Store the value (n) of the head node to be deleted */
	deleted_value = temp_node->n;

	/* Free the memory occupied by the previous head node */
	free(temp_node);

	/* Update the head pointer to the next node */
	*head = next_node;
 /* Return the value of the deleted head node or 0 if the list was empty */
	return (deleted_value);
}
