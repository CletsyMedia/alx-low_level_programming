#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 *	using the Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;
	size_t curr = 0;
	size_t i;

	if (array == NULL)
	return (-1);

	while (curr < size && array[curr] < value)
	{
	printf("Value checked array[%lu] = [%d]\n", curr, array[curr]);
	prev = curr;
	curr += step;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, curr);

	i = prev;
	while (i <= curr && i < size)
	{
	printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	if (array[i] == value)
	return (i);
	i++;
	}

	return (-1);
}
