#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index.
 * @head: A pointer to a pointer to the head of the list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 if the node was successfully deleted, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int i;

	if (!head || !*head)
	return (-1);

	current = *head;
	if (index == 0)
	{
	*head = current->next;
	if (*head)
	(*head)->prev = NULL;
	free(current);
	return (1);
	}

	for (i = 0; i < index && current; i++)
	{
	current = current->next;
	}

	if (!current)
	return (-1);

	temp = current->prev;
	temp->next = current->next;
	if (current->next)
	current->next->prev = temp;

	free(current);
	return (1);
}
