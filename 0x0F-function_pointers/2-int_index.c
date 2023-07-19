#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

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
 * or 'cmp' is NULL, it returns -1. Otherwise, it uses a for loop to iterate
 * through the array, calling 'cmp'. If 'cmp' returns a non-zero
 * value for an element, the index of that element is returned. If no element
 * satisfies the comparison function, the function returns -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (int idx = 0; idx < size; idx++)
	{
		if (cmp(array[idx]))
			return (idx);
	}

	return (-1);
}
