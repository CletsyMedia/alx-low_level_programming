#include "search_algos.h"
#include <stdio.h>

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: Pointer to the head of the skip list to search in.
 * @value: Value to search for.
 *
 * Return: Pointer to the first node where value is located,
 * or NULL if not found.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *express = NULL, *prev = NULL;

	if (list == NULL)
	return (NULL);

	/* Find the express lane */
	express = list->express;
	while (express)
	{
	printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
	if (express->n >= value)
	{
	printf("Value found between indexes [%lu] and [%lu]\n",
prev->index, express->index);
	break;
	}
	prev = express;
	express = express->express;
	}

	/* If the express lane is NULL, update the express lane to the end */
	if (express == NULL)
	{
	while (prev->next)
	prev = prev->next;
	printf("Value found between indexes [%lu] and [%lu]\n",
prev->index, prev->index);
	}

	/* Search in the range between prev and express */
	while (prev && prev->index <= express->index)
	{
	printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
	if (prev->n == value)
	return (prev);
	prev = prev->next;
	}

	return (NULL);
}
