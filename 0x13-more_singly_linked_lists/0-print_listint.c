#include <stdio.h>
#include "lists.h"
/**
	* print_listint - this prints all elements of a list_t list.
	*
	* @h: singly linked list to print
	*
	* Return: the number of nodes in the list
	*
	*/
size_t print_listint(const listint_t *h)
{
	/* Var to keep track of the number of nodes */
	size_t nodeCount = 0;
	/* Traverse the linked list using a while loop */
	while (h)
	{
	/* Print the value of the current node */
		printf("%d\n", h->n);
	/* Move to the next node in the list */
		h = h->next;
	/* Then increment the node count */
		nodeCount++;
	}
	/* Return total nodes in the list */
	return (nodeCount);
}
