#include "lists.h"
#include <stdlib.h>

/**
	* free_listint2 - Frees a list and sets its head to NULL
	*
	* @head: double pointer to the head of the list
	*
	* Return: Nothing
	* Description:
	*	This function frees the memory occupied by each node in the linked list
	*	starting from the head. It also sets the head of the list to NULL,
	*	ensuring that the list is empty after freeing all nodes.
	*/
void free_listint2(listint_t **head)
{
	listint_t *Nodetemp, *currNode;

	if (head == NULL || *head == NULL)
		return;

	currNode = *head;

	/* for looping for better readability */
	for (; currNode != NULL; currNode = currNode->next)
	{
		Nodetemp = currNode;
		free(Nodetemp);
	}

	*head = NULL;
}
