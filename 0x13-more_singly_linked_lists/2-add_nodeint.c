#include "lists.h"
#include <stdlib.h>
/**
	* add_nodeint - add new nodes to the list beginning
	* @head: pointer to the current place in the list
	* @n: int to add to the list
	* Return: pointer to current position in list
	*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newHead;
	/* Create a new node to be added at the beginning */
	newHead = *head;
	/* Allocate memory for the new node */
	newHead = malloc(sizeof(listint_t));
	/* In case memory allocation failed */
	if (newHead == NULL)
	{
	return (NULL);
	}
	/* Set the data and update the new node's "next" pointer */
	newHead->n = n;

	newHead->next = *head;
	/* Update the *head */
	*head = newHead;
	/* Return the pointer to the new head of the list */
	return (*head);
}
