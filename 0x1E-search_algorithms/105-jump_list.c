#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * jump_list - Searches for a value in a sorted list of integers
 * using the Jump search algorithm
 * @list: Pointer to the head of the list to search in
 * @size: Number of nodes in the list
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located, or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump, prev_index;
	listint_t *prev, *current;
	size_t i;

	if (list == NULL || size == 0)
	return (NULL);

	jump = sqrt(size);
	prev = NULL;
	current = list;

	while (current != NULL && current->n < value)
	{
	prev = current;
	prev_index = prev->index;
	for (i = 0; current->next && i < jump; i++)
	current = current->next;
	printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
	}

	if (prev == NULL)
	return (NULL);

	printf("Value found between indexes [%lu] and [%lu]\n",
	prev_index, current->index);

	while (prev != NULL && prev->index <= current->index)
	{
	printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
	if (prev->n == value)
	return (prev);
	prev = prev->next;
	}

	return (NULL);
}
