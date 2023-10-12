#include "lists.h"

/**
 * free_dlistint - Frees a linked list.
 * @head: Pointer to the head of the list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	for (; head != NULL; head = head->next)
	{
	tmp = head;
	tmp->prev = NULL;
	tmp->next = NULL;
	free(tmp);
	}
}
