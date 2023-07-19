#include <stddef.h>

/**
 * array_iterator - Execute function on each element of an array.
 * @array: Input array containing integers.
 * @size: Size of the array.
 * @action: Pointer to a function that takes an integer argument.
 *
 * This function iterates over the elements of the 'array' and applies the
 * function pointed to by 'action' to each element. If 'array' and 'action'
 * are valid (not NULL), the function is executed on each element of the array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (array != NULL && size > 0 && action != NULL)
		for (index = 0; index < size; index++)
			action(array[index]);

}
