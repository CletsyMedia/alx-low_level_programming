#include "search_algos.h"
/**
 * linear_search - searches for a value in an array
 * of integers using the Linear search algorithm.
 * @array : pointer to the first element of the array to search in.
 * @size : number of elements in array.
 * @value : value to search for.
 * Return: first index of located value ||
 * -1 if value not in array and if array is NULL.
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; array && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}
