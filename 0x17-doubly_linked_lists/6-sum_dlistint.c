#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all data (n) in a dlistint_t linked list.
 * @head: Pointer to the head of the list.
 * Return: Sum of all data elements, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current;

	for (current = head; current != NULL; current = current->next)
	{
	sum += current->n;
	}

	return (sum);
}
