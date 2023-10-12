#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: The integer value to add to the new node.
 * Return: The address of the new element, or NULL if it fails.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *tail = *head;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	return (NULL);

	/* Initialize the new node */
	new_node->n = n;
	new_node->next = NULL;

	if (tail == NULL)
	{
	/* If the list is empty, the new node is both the head and the tail */
	new_node->prev = NULL;
	*head = new_node;
	}
	else
	{
	/* Find the current tail of the list */
	while (tail->next)
	tail = tail->next;

	/* Update the pointers to add the new node at the end */
	new_node->prev = tail;
	tail->next = new_node;
	}

	return (new_node);
}
