#include "search_algos.h"
#include <stdio.h>

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 *	using the advanced binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where the value is located, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid, i;

	if (array == NULL || size == 0)
	return (-1);

	while (left <= right)
	{
	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
	printf("%d", array[i]);
	if (i < right)
	printf(", ");
	}
	printf("\n");

	mid = left + (right - left) / 2;

	if (array[mid] == value)
	{
	if (mid == left || array[mid - 1] != value)
	return (mid);
	else
	right = mid;
	}
	else if (array[mid] < value)
	{
	left = mid + 1;
	}
	else
	{
	right = mid - 1;
	}
	}

	return (-1);
}
