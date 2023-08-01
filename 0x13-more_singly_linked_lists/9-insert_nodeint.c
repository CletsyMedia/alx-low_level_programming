#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a node at the specified index.
 * @head: Pointer to a pointer to the head of the list.
 * @index: The location to insert the new node.
 * @n: The value to be stored in the new node.
 *
 * Return: Pointer to the head of the modified list.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *current_node, *new_node;

	/* Create a new node and allocate memory for it */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);

	/* Set the value of the new node */
	new_node->n = n;

	/* If the new node is to be inserted at the beginning of the list */
	if (index == 0)
	{
	new_node->next = *head;
	*head = new_node;
	return (*head);
	}

	/* Find the node just before the desired insertion point */
	current_node = *head;
	for (; index > 1; index--)
	{
	current_node = current_node->next;
	/* If the index is out of range, free the new node and return NULL */
	if (!current_node)
	{
	free(new_node);
	return (NULL);
	}
	}

	/* Insert the new node after the current_node */
	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}
