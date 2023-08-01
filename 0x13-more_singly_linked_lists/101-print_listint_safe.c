#include "lists.h"

/**
 * free_listp - Frees a linked list
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: No return.
 */
void free_listp(listp_t **head)
{
	/* Declare variables to hold the current and next nodes */
	listp_t *current;
	listp_t *next_node;

	/* Check if the 'head' pointer is not NULL */
	if (head != NULL)
	{
		/* Set 'current' to point to the head of the list */
		current = *head;

		/* Use a loop to traverse the list and free nodes */
		for (; current != NULL; current = next_node)
		{
			/* Save the next node before freeing the current one */
			next_node = current->next;
			free(current); /* Free the current node */
		}
		/* Set the head of the list to NULL after freeing all nodes */
		*head = NULL;
	}
}

/**
 * print_listint_safe - Prints a linked list.
 * @head: Pointer to the head of a list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	/* Initialize variables to keep track of the node count and printed nodes */
	size_t node_count = 0;
	listp_t *printed_nodes = NULL;
	listp_t *new_node, *check_node;

	/* Use a loop to traverse the list and print the nodes */
	for (; head != NULL; head = head->next)
	{
		/* Allocate memory for a new node to keep track of printed nodes */
		new_node = malloc(sizeof(listp_t));
		if (new_node == NULL)
			exit(98); /* If malloc fails, exit the program with error code 98 */
		/* Set the 'p' pointer in the new node to point to the current node */
		new_node->p = (void *)head;

		/* Link the new node to the existing list of printed nodes */
		new_node->next = printed_nodes;
		printed_nodes = new_node; /* Update the list of printed nodes */

		/* Check for loops by iterating through the list of printed nodes */
		check_node = printed_nodes;
		for (; check_node->next != NULL; check_node = check_node->next)
		{
			/* If a loop is found, print the message and free the memory */
			if (head == check_node->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&printed_nodes);
				return (node_count); /* Return the current node count */
			}
		}

		/* If no loop is found, print the address and value of the current node */
		printf("[%p] %d\n", (void *)head, head->n);

		/* Increment the node count */
		node_count++;
	}
	free_listp(&printed_nodes);
	return (node_count);
}
