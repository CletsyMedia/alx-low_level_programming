#include "search_algos.h"

/**
 * advanced_binary_helper - Performs binary search in the given sorted array
 *                             within the specified range.
 * @array: Pointer to the array to be searched.
 * @low: Starting index of the search range.
 * @high: Ending index of the search range.
 * @value: Value to be searched for.
 *
 * Return: Index of the found value, or -1 if not found.
 */
int advanced_binary_helper(int *array, size_t low, size_t high, int value)
{
	size_t i, mid;

	if (low > high)
		return (-1);

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
		printf("%i%s", array[i], i == high ? "\n" : ", ");

	mid = low + (high - low) / 2;

	if (array[mid] == value && (mid == low || array[mid - 1] != value))
		return (mid);
	else if (array[mid] < value)
		return (advanced_binary_helper(array, mid + 1, high, value));
	else
		return (advanced_binary_helper(array, low, mid, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers.
 * @array: A pointer to the first element of the array to search.
 * @size: Size of the array.
 * @value: The value to search for.
 *
 * Return: Index of the value or -1 if array is NULL or value isn't present.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array)
		return (advanced_binary_helper(array, 0, size - 1, value));

	return (-1);
}
