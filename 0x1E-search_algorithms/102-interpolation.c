#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 *	using the Interpolation search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t inter = 0, s = size - 1, move;

	if (array)
	{
		while (inter <= s)
		{
			move = inter + (((double)(s - inter) / (array[s] - array[inter])) *
					(value - array[inter]));
			if (move < size)
				printf("Value checked array[%lu] = [%d]\n", move, array[move]);
			else
			{
				printf("Value checked array[%lu] is out of range\n", move);
				break;
			}
			if (array[move] == value)
				return (move);
			if (array[move] < value)
				inter = move + 1;
			else
				s = move - 1;
		}
	}
	return (-1);
}
