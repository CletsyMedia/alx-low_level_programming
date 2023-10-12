#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list.
 * @head: Pointer to the head of the list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nxt_node;

	for (; head; head = nxt_node)
	{
	nxt_node = head->next;
	free(head);
	}
}
