#include "lists.h"

/**
 * free_listp - Frees a linked list
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: No return.
 */
void free_listp(listp_t **head)
{
	listp_t *current;
	listp_t *next_node;

	if (head != NULL)
	{
		current = *head;
		while (current != NULL)
		{
			next_node = current->next;
			free(current);
			current = next_node;
		}
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
	size_t node_count = 0;
	listp_t *printed_nodes = NULL;
	listp_t *new_node, *check_node;

	while (head != NULL)
	{
		new_node = malloc(sizeof(listp_t));
		if (new_node == NULL)
			exit(98);

		new_node->p = (void *)head;
		new_node->next = printed_nodes;
		printed_nodes = new_node;

		check_node = printed_nodes;
		while (check_node->next != NULL)
		{
			check_node = check_node->next;
			if (head == check_node->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&printed_nodes);
				return (node_count);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		node_count++;
	}

	free_listp(&printed_nodes);
	return (node_count);
}
