#include "search_algos.h"
#include <stdio.h>

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using the Exponential search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 * Return: The index where the value is located, or -1 if not found.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t index = 1, r = 0, move;

	if (array)
	{
		while (index < size && array[index] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", index, array[index]);
			index *= 2;
		}
		r = index < size - 1 ? index : size - 1;
		index /= 2;
		printf("Value found between indexes [%lu] and [%lu]\n", index, r);
		while (index <= r)
		{
			move = (index + r) / 2;
			printf("Value checked array[%lu] = [%d]\n", move, array[move]);
			if (array[move] == value)
				return (move);
			if (array[move] < value)
				index = move + 1;
			else
				r = move - 1;
		}
	}
	return (-1);
}
