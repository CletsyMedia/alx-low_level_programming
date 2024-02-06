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
	size_t x;

	if (array == NULL)
	{
		return (-1);
	}

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%li] = [%i]\n", x, array[x]);
		if (array[x] == value)
		{
			return (x);
		}
	}
	return (-1);
}
