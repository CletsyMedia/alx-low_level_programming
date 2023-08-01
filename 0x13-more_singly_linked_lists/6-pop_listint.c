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
	int pop;/* To store the value of the deleted head node */
	listint_t *currNode, *temp;

	/* Check if the linked list is empty or if the head is NULL */
	if (head == NULL)

		return (0);

	/* Initialize temp and currNode to the head of the linked list */
		temp = currNode = *head;
		/* Check if the linked list has at least one node */
	if (*head)
	{
		/* Store the value (n) of the head node to be deleted */
		pop = currNode->n;
		/* Move the head to the next node */
		*head = currNode->next;
		/* Free the memory allocated by the prev head node */
		free(temp);
	}
	else
	{
		/* If the linked list is empty, set pop to 0 */
		pop = 0;

		return (pop);
	}
}
