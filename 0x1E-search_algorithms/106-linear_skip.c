#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers
 * @list: Pointer to the head of the skip list to search in
 * @value: Value to search for
 *
 * Return: A pointer to the first node where value is located,
 *	or NULL if value is not present in list or if head is NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *express = list, *prev = NULL;

	if (list == NULL)
		return (NULL);

	while (express)
	{
		if (express->n >= value || express->express == NULL)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
				   prev ? prev->index : 0, express->index);
			break;
		}
		printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
		prev = express;
		express = express->express;
	}

	if (!express)
	{
		while (prev->next)
			prev = prev->next;
	}

	while (prev && prev->index < express->index)
	{
		if (prev->index != 0)
			printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
