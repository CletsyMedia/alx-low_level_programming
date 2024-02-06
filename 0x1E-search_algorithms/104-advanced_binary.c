#include "search_algos.h"
/**
 * advanced_binary - function that searches for
 * a value in a sorted array of integers.
 * @array : pointer to the first element of the array to search in.
 * @size : the number of elements in array.
 * @value : the value to search for.
 * Return: index of value or -1 if not found.
*/
int advanced_binary(int *array, size_t size, int value)
{
	size_t index = 0, s = size - 1, move, r;

	if (array)
	{
		while (index <= s)
		{
			printf("Searching in array: ");
			for (r = index; r < s; r++)
				printf("%d, ", array[r]);
			printf("%d\n", array[r]);
			move = (index + s) / 2;
			if (array[move] == value)
			{
				if (move == 0 || array[move - 1] < value)
					return (move);
				s = move;
			}
			else if (array[move] < value)
				index = move + 1;
			else
				s = move;
		}
	}
	return (-1);
}
