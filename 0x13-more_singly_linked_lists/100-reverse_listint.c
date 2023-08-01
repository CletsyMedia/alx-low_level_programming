#include "lists.h"

/**
 * reverse_listint - Reverses a linked list.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: Pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *currNode = NULL;

	for (; *head != NULL; *head = currNode)
	{
		currNode = (*head)->next;
		(*head)->next = previous;
		previous = *head;
	}

	*head = previous;
	return (*head);
}
