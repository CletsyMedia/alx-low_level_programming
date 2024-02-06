#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 *	using the Linear search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	if (array == NULL)
	return (-1);

	for (size_t i = 0; i < size; i++)
	{
	printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	if (array[i] == value)
	return (i);
	}

	return (-1);
}
