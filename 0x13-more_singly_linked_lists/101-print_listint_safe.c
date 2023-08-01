#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 *	Exits the program with status 98 if the function fails.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num_nodes = 0;
	const listint_t *current = head;
	const listint_t *check_cycle = head;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		num_nodes++;

		/* Check for a cycle in the list */
		check_cycle = check_cycle->next;
		if (check_cycle != NULL)
			check_cycle = check_cycle->next;

		if (current == check_cycle)
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			exit(98);
		}

		current = current->next;
	}

	return (num_nodes);
}
