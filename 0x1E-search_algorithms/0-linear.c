#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 *	using the Linear search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where value is located,
 *	or -1 if value is not present in array or array is NULL
 */
int linear_search(const int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
	return (-1);

	for (index = 0; index < size; index++)
	{
	if (array[index] == value)
	{
	printf("Value checked array[%lu] = [%d]\n", index, array[index]);
	return (index);
	}
	}

	return (-1);
}
