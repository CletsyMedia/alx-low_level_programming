#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - Execute a given function on each element of an array.
 * @array: Array to iterate.
 * @size: Size of the array.
 * @action: Pointer to the function to call.
 *
 * Return: Empty if @array and @action are NULL.
 *
 * This function iterates over the elements of the 'array' and applies the
 * function pointed to by 'action' to each element. If 'array', 'size', and
 * 'action' are valid (not NULL and size > 0), it uses a while loop to process
 * each element of the array with the provided function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int idx = 0;

	if (array != NULL && size > 0 && action != NULL)
	{
		while (idx < size)
		{
			action(array[idx]);
			idx++;
		}
	}
}
