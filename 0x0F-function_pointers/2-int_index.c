#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer using a function pointer.
 * @array: Pointer to the input array of integers.
 * @size: Size of the array.
 * @cmp: Pointer to the comparison function.
 *
 * Return: Index of the first element found, or -1 if not found.
 *
 * This function searches for an integer in the 'array' by applying the
 * 'cmp' function to each element. If 'size' is zero or negative, or 'array'
 * or 'cmp' is NULL, it returns -1. Otherwise, it uses a while loop to iterate
 * through the array, calling 'cmp' for each element. If 'cmp' returns a value
 * that evaluates to TRUE (non-zero), the index of that element is returned.
 * If no element satisfies the comparison function, the function returns -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;
	bool y = FALSE;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		while (index < size)
		{
			y = cmp(array[index]);
			if (y == TRUE)
				return (index);
			index++;
		}
	}

	return (-1);
}
